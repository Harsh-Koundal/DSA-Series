/*Question: Valid Parentheses

Given a string s containing just the characters (, ), {, }, [ and ], determine if the input string is valid.

A string is valid if:

1. Open brackets must be closed by the same type of brackets.
2. Open brackets must be closed in the correct order.*/



function isValid(s){
    const stack = [];
    const map = {
        ")":"(",
        "}":"{",
        "]":"["
    }
    for(let char of s){
        if(char ==="(" || char === "{" || char === "["){
            stack.push(char);
        }else{
            if(stack.length === 0 || stack[stack.length - 1] !== map[char]){
                return false;
            }
            stack.pop();
        }
    }
    return stack.length === 0;
}

console.log(isValid("()[]{}")); // true
console.log(isValid("(]")); // false