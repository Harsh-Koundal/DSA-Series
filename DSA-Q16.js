//Merge Sorted Array

/**You are given two integer arrays nums1 and nums2, sorted in non-decreasing order, and two integers m and n, representing the number of elements in nums1 and nums2 respectively.

Merge nums1 and nums2 into a single array sorted in non-decreasing order. */


function mergeArray(nums1,nums2,m,n){
  let i =m-1 
  let j=n-1
  let k = m+n-1;
  while(j>=0){
    if(i>=0 && nums1[i] > nums2[j]){
      nums1[k]=nums1[i];
      i--
    }else{
      nums1[k]=nums2[j];
      j--
    }
    k--
  }
  return nums1
    
    
}
console.log(mergeArray([1,2,3,0,0,0],[2,5,6],3,3))