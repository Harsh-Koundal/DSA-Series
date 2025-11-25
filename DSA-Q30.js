class Account{
    #pin;
    constructor(balance,pin){
        this.balance = balance;
        this.#pin = pin;
    }

    get maskedPin(){
        return "***" + String(this.#pin).slice(-2);
    }

    deposit(amount){
        this.balance +=amount;
        return this.balance;
    }

    static bankName(){
        return "State Bank of India";
    }
}

class Savings extends Account{
    constructor(balance,pin){
        super(balance,pin);
    }

    deposit(amount){
        super.deposit(amount);
        return this.balance + 50;
    }
}

const acc = new Savings(2000,9876);

console.log(Account.bankName());
console.log(acc.maskedPin);
console.log(acc.deposit(500));
console.log(acc.balance);

// output

// State Bank of India
// ***76
// 2550
// 2500
