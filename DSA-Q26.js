/** output based question  */

class Animal{
    speak(){
        return 'Generic sound';
    }
}

class Dog extends Animal{
    speak(){
        return 'Bark';
    }
}

const a = new Animal();
const d = new Dog();

console.log(a.speak()); 
console.log(d.speak()); 

//output 
//Generic sound
//Bark