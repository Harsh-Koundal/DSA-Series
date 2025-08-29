// reverse an array in-place

function reverseInPlace(arr){
    let l = 0 ,r=arr.length-1
    for(l;l<r;l++){
        [arr[l],arr[r] ]=[arr[r],arr[l]]
        r--
    }
    return arr
}
console.log(reverseInPlace([1,2,3,4,5,6]))