/**Write a Factory Function:

❗ createPayment(type)

It should return:

Razorpay service if type = "razorpay"

Stripe service if type = "stripe" */
function createPayment(type){
    const req = type.toLowerCase();
    if(req !== "razorpay" && req !== "stripe") return "Invalid service";
    
    function pay(amount){
        return "Paid "+amount +" using " + req 
    }
    return {pay};
}



const p = createPayment("razorpay");
console.log(p.pay(500));  
