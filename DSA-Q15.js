// Given an array of integers nums, find the contiguous subarray (containing at least one number) which has the largest sum, and return its sum.

function contiguousSubarray(arr){
    let curentSum =0
    let maxSum=0
    for(let i=0;i<arr.length;i++){
        curentSum += arr[i]
        if(curentSum<0) curentSum=0;
        maxSum = Math.max(maxSum,curentSum);
    }
    return maxSum
}
console.log(contiguousSubarray([-2,1,-3,4,-1,2,1,-5,4]))