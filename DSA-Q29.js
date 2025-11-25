/**What will this code output? */

class Bank{
    constructor(balance){
        this.balance = balance;
    }
    deposite(amount){
        this.balance +=amount
        return this.balance;
    }

    static type(){
        return "Generic Bank";
    }

}

class SBI extends Bank{
    constructor(balance){
        super(balance);
    }

    static type(){
        return super.type() + "SBI Branch";
    }

    deposite(amount){
        super.deposite(amount);
        return this.balance + 100;
    }
}

const b = new Bank(1000);
const s = new SBI(1000);

console.log(Bank.type());
console.log(SBI.type());
console.log(b.deposite(500));
console.log(s.deposite(500));

// output 

// Generic Bank
// Generic BankSBI Branch
// 1500
// 1600