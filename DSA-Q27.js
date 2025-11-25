/** What will the following code output?*/

class Person{
    constructor(name){
        this.name = name;
    }

    greet(){
        return 'Hello ' + this.name;
    }
}

class Students extends Person{
    constructor(name,grade){
        super(name);
        this.grade = grade;
    }

    greet(){
        return super.greet() + " from grade " + this.grade;
    }
}

const s = new Students("Harsh","A");
console.log(s.greet());  

// output 
// Hello Harsh from grade A
