// Given an array of size n containing numbers from 1 to (n+1) with exactly one number missing, find the missing number


function findMissing(arr){
    let n =arr.length;
    let total = ((n+1)*(n+2))/2;
    let sum = 0;
    for(let i=0;i<n;i++){
        sum +=arr[i];
    }
    return total-sum
}
console.log(findMissing([2,1,4,6,3,5]))