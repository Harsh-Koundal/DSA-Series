// Write a function to find the longest common prefix string amongst an array of strings.

function longestCommonPrefix(str){
    if(!str.length) return "";
    let prefix = str[0];
    for (let i=0;i<str.length;i++){
        while(str[i].indexOf(prefix) !==0){
            prefix =prefix.slice(0,prefix.length-1);
            if(prefix ==="") return "";
        }
    }
    return prefix;
}
console.log(longestCommonPrefix(["flower","flow","flight"])); // "fl"
console.log(longestCommonPrefix(["dog","racecar","car"]));    // ""
console.log(longestCommonPrefix(["interspecies","interview","internet"])); // "inter"
