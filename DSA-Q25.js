/**In a production system with millions of orders and products, build a MongoDB aggregation pipeline that returns the top 3 products per category by total revenue in the last 90 days. Each result item should include:

category

productId

name

totalRevenue (sum of qty * priceAtPurchase over last 90 days)

unitsSold (sum of qty) */



// compute startDate
const startDate = new Date(Date.now()-90*24*60*1000);

// pipeline
const pipeline = [
    //match orders within last 90 days
    {$match:{createdAt:{$gte:startDate}}},

    //unwind items array so each item becomes a document 
    {$unwind:"$items"},

    //aggregate per product ID across the matched orders
    {
        $group:{
            _id:"$items.productId",
            unitsSold:{$sum: "$items.qty"},
            totalRevenue:{
                $sum:{$multiply:["$items.qty","$items.priceAtPurchase"]}
            }
        }
    },
    // join with products collection to get name + category 
    {
        $lookup:{
            from:"products",
            localField:"_id",
            foreignField:"_id",
            as:"product"
        }
    },

    //flattern lookup result if you want to keep products that no longer exists, set preseveNullAndEmptyArrays:true
    {$unwind:{path:"$product",preseveNullAndEmptyArrays:false}},
    // project fields we need
    {
        $project:{
            productId:"$_id",
            name:"$product.name",
            category:"$product.categgory",
            unitsSold:1,
            totalRevenue:1
            }
    },

    //sort by category and revenue descending 
    {$sort:{category:1,totalRevenue:-1}},

    //group by category and accumulate products array in revenue order
    {
        $group:{
            _id:"$category",
            products:{
                $push:{
                    productId:"$productId",
                    name:"$name",
                    totalRevenue:"$totalRevenue",
                    unitsSold:"$unitsSold"
                }
            }
        }
    },

    // keep only top 3 enteries per category 
    {$project:{category:"$_id",topProducts:{$slice:["$products",3]}}},

    // unwind so each top product becames a document but keep array index
    {$unwind:{path:"$topProducts",includeArrayIndex:"rankIndex"}},

    // final reshape + compute 1-based rank
    {
        $project:{
            _id:0,
            category:1,
            productId:"$topProducts.productId",
            name:"$topProducts.name",
            totalRevenue:"$topProducts.totalRevenue",
            unitsSold:"$topProducts.unitsSold",
            rank:{$add:["$rankIndex",1]}
        }
    },

    // final sort by category then rank
    {$sort:{category:1,rank:1}}
];

// Run with allowDiskUse: true when data is huge
const results = await db.collection("orders").aggrefate(pipeline,{allowDiskUse:true}).toArray();
