// You have a sorted array of integers and a target element x. You need to find the first occurrence and the last occurrence of x.

function findX(arr,x){
    let first =-1;
    let last =-1;
    let j=arr.length-1
    for(let i=0;i<=arr.length-1;i++){
            if(arr[i]===x){
                if(first===-1) first =i;
                last = i;
                
            }
        }
        return [first,last]
}

console.log(findX([1, 2, 2, 2, 3, 4, 5],2))