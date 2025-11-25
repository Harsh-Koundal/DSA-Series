/** What will this code output?*/

class Car{
    constructor(model){
        this.model = model;
    }

    static company(){
        return "BMW Company";
    }

    getModel(){
        return this.model;
    }
}

class ElectricCar extends Car{
    constructor(model,battery){
        super(model);
        this.battery = battery;
    }

    static company(){
        return "tesla"
    }
}

const c1 = new Car("M5");
const e1 = new ElectricCar("Model S","100 kwh")

console.log(Car.company());
console.log(ElectricCar.company());
console.log(c1.getModel());
console.log(e1.getModel());

//output 

// BMW Company
// tesla
// M5
// Model S