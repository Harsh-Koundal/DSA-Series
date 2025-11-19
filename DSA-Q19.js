/*Write a JavaScript program to find all duplicate elements in an array and print their original indexes.
Example:
Input: [1,2,3,1,4]
Output: Duplicate value: 1 at indexes [0, 3]*/

const arr = [1,2,3,1,4,3];
const index = [];

for(let i=0;i<=arr.length-1;i++){
    for(let j =i+1;j<=arr.length;j++){
        if(arr[i]===arr[j]){
            index.push(i,j)
        }
    }
}
console.log(index)