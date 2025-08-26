//Climbing Stairs

/**You are climbing a staircase. It takes n steps to reach the top.

Each time you can either climb 1 or 2 steps. In how many distinct ways can you climb to the top? */

function climbStairs(n){
    if(n<=2) return n;
    let prev1=1,prev2=2;
    for(let i=3;i<=n;i++){
        let current = prev1+prev2;
        prev1=prev2;
        prev2 = current;
    }
    return prev2
}
console.log(climbStairs(4))