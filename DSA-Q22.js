/**Write an algorithm to determine if a number n is happy.

A happy number is a number defined by the following process:

Starting with any positive integer, replace the number by the sum of the squares of its digits.
Repeat the process until the number equals 1 (where it will stay), or it loops endlessly in a cycle which does not include 1.
Those numbers for which this process ends in 1 are happy.
Return true if n is a happy number, and false if not. */

function happy(n){
    let seen = new Set();
    while(n!==1){
        let sum = 0
        if(seen.has(n)) return false;
        seen.add(n);
      const value = String(n);
      for(let i =0 ; i<value.length;i++){
        const digit = Number(value[i]);
        const square = digit*digit;
        sum += square;
    }
    n =sum
      
    }
      return true
}

console.log(happy(19));