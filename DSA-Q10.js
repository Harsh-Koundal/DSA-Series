// Add Binary

/**Given two binary strings a and b, return their sum as a binary string. */

function addBinary(a,b){
    let i=a.length-1,j=b.length-1;
    let carry =0,result =[];
    while(i>=0||j>=0||carry){
        let sum = carry;
        if(i>=0) sum +=+a[i--]
        if(j>=0) sum +=+b[j--]
        result.push(sum%2);
        carry = Math.floor(sum/2);
    }
    return result.reverse().join('')
}
console.log(addBinary("11","10"))