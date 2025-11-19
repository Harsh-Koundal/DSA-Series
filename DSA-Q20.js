/**You are given an array nums and an integer original. As long as original exists in the array, set original = original * 2. Continue this process until original no longer exists in nums. Return the final value of original.

Example:
Input: nums = [1, 2, 3, 1, 4], original = 1
Output: 2 (because 1 → found → becomes 2, and 2 exists, so becomes 4) */

function findFinalValue(nums,original){
    while(nums.includes(original)){
        original *=2
    }
    return original
}

console.log(findFinalValue([1,2,3,4,5,6],2))