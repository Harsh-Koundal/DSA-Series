// Length of Last Word

/**Given a string s consisting of words and spaces, return the length of the last word in the string. */

function lengthOfLastWord(s) {
    let count=0
    for(let i=s.length-1;i>=0;i--){
        if(s[i]!==" "){
        count++    
        } 
        else if(count >0) return count
        }
        return count
};

console.log(lengthOfLastWord("hello world"))