// Remove Duplicates from Sorted Array

/* Given an integer array nums sorted in non-decreasing order, remove the duplicates in-place such that each unique element appears only once. The relative order of the elements should be kept the same. Then return the number of unique elements in nums.*/

function removeDuplicates(nums){
    let i=0;
    for(let j=1;j<nums.length;j++){
        if(nums[i] !== nums[j]){
            i++;
            nums[i]=nums[j];
        }
    }
    return nums.slice(0,i+1)
}
console.log(removeDuplicates([1,1,2,2,3,3,4,4,]))