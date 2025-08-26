// Find the Index of the First Occurrence in a String

/**Given two strings needle and haystack, return the index of the first occurrence of needle in haystack, or -1 if needle is not part of haystack. */

function strStr(haystack, needle) {
  if (needle === "") return 0; 

  for (let i = 0; i <= haystack.length - needle.length; i++) {
    let match = true;
    for (let j = 0; j < needle.length; j++) {
      if (haystack[i + j] !== needle[j]) {
        match = false;
        break;
      }
    }
    if (match) return i;
  }

  return -1;
}

console.log(strStr("hello", "ll"));