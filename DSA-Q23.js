/**Given an array of positive integers, find the length of the smallest subarray whose sum is greater than or equal to the target. */

function minSubArrayLen(target,nums){
    let left = 0;
    let sum = 0;
    let minLen = Infinity;

    for(let right = 0;right<nums.length;right++){
        sum+=nums[right];

        while(sum >= target){
            minLen =  Math.min(minLen,right-left+1);
            sum -=nums[left];
            left++;
        }
    }
    return minLen === Infinity ? 0 : minLen;
}

console.log(minSubArrayLen(7, [2, 1, 5, 2, 3, 2]))