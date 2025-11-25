/**ADVANCED JAVASCRIPT + DSA + ASYNC EXECUTION */

console.log('A');

setTimeout(()=>console.log('B'),0);

Promise.resolve().then(()=>console.log('C'));

for(let i=0;i<3;i++){
    Promise.resolve().then(()=>console.log(i));
}

console.log("D")

// output : A D C 0 1 2  B