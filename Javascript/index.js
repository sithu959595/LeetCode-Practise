console.log('Hi World');

let name='Si Thu';
console.log(name);

const interestRate=0.3;
//interestRate=1; interestRate value cannot be changed.
console.log(interestRate);

let person={
name: 'Si Thu Lin',
age: 28

};

person.name='SI THU';


/* Bracket method can let the user select the target properties name during the runtime. 
So, objects in javascript look like arrays. */
person['name']='sithulin';


console.log(person);
let testObj={
    12: "Namath",
    16: "Montana",
    19: "Unitas"
};
var player=16;
console.log("The player name is "+ testObj[player]);

//Properties can be added easily to objects.
var ourDog={
    "name": "camper",
    "legs": 4,
    "tail": 1,
    "friends": ["everything"],
    gender: "male"
};
ourDog.bark="bow-bow";
ourDog["bark1"]="Woof!";  
ourDog[16]="birthday";
let b=false;
ourDog[b]=18;
var height;
ourDog[height]=17;



ourDog["Fancy"]=ourDog["Fancy"] || [1,2,3]; //This means that if there is not Fancy property, create one and use the value [1,2,3] for that
ourDog["bark1"]=ourDog["bark1"] || [1,2,3]; //This will do nothing as there is bark1 property.


/* || returns whatever true FIRST to test1. In this case test is 0 and 0 is converted into 
flase. When "thisistesting" is converted into boolean, it is true. So, "thisistesting" is returned into test1.
If test is 1, || will return 1 into test1 since 1 is converted into true and it is the FIRST true. */
let test=0;
let test1=test || "thisistesting" ;
console.log(test1);

// ourDog[gene]="Dopamam"; This statement will give an error.
console.log(ourDog);
console.log(ourDog["well"]);

let abb=null;
/*Since Javascript is dynamic language, the array automatically has the dynamic array properties,
making it unneccessary to difine the size of the array. Plus, the interesting thing is that 
different primitive type can be stored in the same array. 
Arrays are onjects type and they have properties defined in it like regular objects.
*/
let selectedColors=['red','blue'];
selectedColors[3]=12;
selectedColors[2]=true;
selectedColors[4]=person;

console.log(selectedColors.length);


function square(number){
    return number*number;
}
console.log('The answer is '+ square(7));

//if a variable has no var keyword in front of it, it will become a global variable.
hoem=10;
console.log(typeof hoem);

var testArr=[1,2,3,4,5];

console.log("Before" + JSON.stringify(testArr));
testArr.shift();
var rem=testArr.shift();
console.log("After" + testArr);

// == operator convert the value compared to the same type while === operator does not. 
let first=5;
let second='5';
function check(first,second){
if(first==second){
    console.log("It is equal");
}
else{
    console.log("It is not equal");
}
}
check(first,second);

//var aa=[2,3,4,5,6];
//var bb = aa || [7,8];
let oo={
    firstname : "Romeo"
}
console.log(oo["last"] || "Juliet"); // This give "Juliet" since there is no such proterty as "last"
console.log(oo);


//Since let is used for abc, abc cannot be decalred using var or let more. However, abc value can be changed unlike const type. 
let abc="ababab";
abc="abb";  

console.log(abc);

//in the increment and increment1 function default value 1 will be used if there is no argument for the value.
const increment=(function(){
return function increment(number,value=1){
    return number+value;
};
}
)
();
const increment1= (number, value=1)=> number+value;
;


console.log(increment1(5,2));
console.log(increment1(5));

const ttt1=function (a,b,c)
{
    return a+c+b+10;
};

console.log(ttt1(2,3,4));

// ...operator which is called REST OPERATOR converts the incoming argument values into an array

const restTest=function (...args){
return args.map(a=>a+1);
};
console.log(restTest(2,3,4,5,6));

//Array passes by referrence. So, [...] SPREAD OPERATOR is used to copy the array not the referrence.
const arr1=["a","b","c","d","e"];
let arr2;
arr2=arr1;
arr2[1]="potato";
console.log(arr1[1]);

let arr3;
arr3=[...arr1];
arr3[3]="Orange";
console.log(arr3);  

//Getting values from a object properties values and assigning them into new variable can be done easily
var voxel={
    x: 3.6, y:7.4, z:6.54

};
const { x : aa, y : bb, z : cc }=voxel; //a=3.6,b=7.4,c=6.54

const LOCAL_FORECAST={
today: {min: 72,max:83},
tomorrow:{min: 73.3, max: 84.6}
};

function getMaxPfTomorrow(forecast){
    "use strict";
    const {tomorrow:{max:maxOfTomorrow}}=forecast;   
}

//The destructing method shown above can also be applied to the arrays.
const [z,x, ,y]=[1,2,3,4,5];  //z=1,x=2,y=4
console.log(z,x,y);
const arr6=[8,9,450];
const [z1, ,x1]=arr6;
console.log("The value of x1 is "+ x1);

//The destructing method shown above can also be to switch the values of variables.
let a1=8,b1=6;
(()=>{
"use strict";
[a1,b1]=[b1,a1];
})();
console.log(a1);
console.log(b1);

//The destructing assignment method shown above can also be used together with the REST OPERATOR

const source=[1,2,3,4,5,6,7,8,9,10];
const [aaa,bbb, , ...arrr]=source; //aaa=1,bbb=2, arr=[4,5,6,7,8,9,10]
console.log(arrr);
arrr[1]=100;
console.log(source[4]);  // 5 So, like SPREAD OPRATOR, the REST OPERATOR also copies the array instead of referrencing the existing array.

//the destructing assignment method shown above can be used to pass argumnents.
const stats={
    max: 56.78,
    median: 34.5,
    mode: 23.87,
    min: -0.75
};

const half=function ({max,min}){
    return (max+min)/2.0;
};

console.log(half(stats));

/*Template literal use back-ticks instead of quotes. 
It supports multi-line and string interpolation. Variables are used inside ${ }.*/

const peron={
    name: "Zodiac H",
    age: 56
};
const greeting = `Hello, my name is ${peron.name}!
I am ${peron.age} years old.`;
console.log(greeting);


/*If an object needs to be created and returned from a funtion, there is a simple to do that.
However, the properties names created for the new object will be decided by the name of the parameter used in the function.*/

const createPersonObject= (name12,age12,gender12) =>({name12,age12,gender12}); //In fact, this looks like creating a constructor for a function
console.log(createPersonObject("Zod",56,"male"));

/*"function" keyword and ; are not needed to be used to write a function in an object since 
functions are just properties like variable in an Object. */
let say={
sayHi(hi){
    console.log(hi);
}

};
say.sayHi("Hehe1");

/* It is very importnant and interesting to note that constructor functions are just classes.
The type of the constructor function is function. However, it give a new object when it is called and excuted.
The keyword "new" is always followed by a constructor funciton. Without the "new" keyword, a new object cannot be created. */

var SpaceShuttle=function(targetPlanet){
    this.targetPlanet=targetPlanet;
}

var zeus= new SpaceShuttle('Jupiter');

console.log(typeof SpaceShuttle);  //function
console.log(typeof zeus);   //object

/* The class keyword can be used insted of the above way like in C++ or Java to create classes.
However, the keyword "constructor" needs to be used for that.*/

class SpaceShuttle1{
    constructor(targetPlanet1){
        this.targetPlanet1=targetPlanet1;
    }
}

var zeus1=new SpaceShuttle1('Jupetus');

console.log(zeus1.targetPlanet1);
console.log(typeof SpaceShuttle1);  //function even though it is a class

//This is playing with class, function and onject. Classes can be inside a fuunction.

function makeClass(){
    class Vegetable{
        constructor(name){
            this.name=name;
        }
    }
    return Vegetable;  //This is returning class not onject.
}

const Vegetable1=makeClass();
const carrot=new Vegetable1('carrot');
console.log(carrot.name);
console.log("#" +typeof Vegetable1);

/* Setter, getter and constructor methods are more nature and understanable.
To call getter mothod, () does not need to be used. So, it makes feel like accessing a variable of an object.
Similarly, to call setter method, simply use "." and "=" keywords.*/

function mClass(){
    class Thermostat{
        constructor(temp){
            this._temp=5/9*(temp-32);
        }
        get temperature(){
            return this._temp;
        }
        set temperature(updatedTemp){
            this._temp=updatedTemp;
        }
    }
    return Thermostat;

}

const Thermostat=mClass();
const thermos=new Thermostat(76);
let temp=thermos.temperature;  // no ()
thermos.temperature=26;  // calling setter method
temp=thermos.temperature;
console.log(temp);


//Be careful with loop when var is used instead of let. let is more similar to the variable type in other languages like C++ or Java.

var aaaa=3;
for(var aaaa=0;aaaa<10;aaaa++){
  console.log(aaaa);  
}
console.log("the original aaaa is "+aaaa); // It gives 10 instead of 3


/* In Javascript, "",null,NanN, 0 and undefined are 
consoidered as booloean flase value.
non-empty string like "Hello", non-zeroa integer like 1,-1 are 
considered true. */

let tes=1;
let tes1=tes || "thisistesting" ;
console.log(tes1);


/*Functions are objects. They can have properties. They can be passed
into arguments and they can be returned. 
*/
function multiply(x, y) {
    return x * y;
  }
  multiply.version = "v.1.0.0";
  console.log(multiply.version);
  
  
  // Function factory
  function makeMultiplier(multiplier) {
    var myFunc = function (x) {
      return multiplier * x;
    };
  
    return myFunc;
  }
  
  var multiplyBy3 = makeMultiplier(3);
  console.log(multiplyBy3(10));
  var doubleAll = makeMultiplier(2);
  console.log(doubleAll(100));
  
  
  
  // Passing functions as arguments
  function doOperationOn(x, operation) {
    return operation(x);
  }
  
  var result = doOperationOn(5, multiplyBy3);
  console.log(result);
  result = doOperationOn(100, doubleAll);
  console.log(result);

  /* It is very interesting to note that if a function is treated
  like an constructor by using 'new' keyword, that function becomes a constructor and it 
  gives an object. If the same fuction is treated like an function,
  it behaves like a regular funtion. */
  
  function Func1(rr){
    this.func1va=15;
    function func2(){
        this.func2var=16;
        console.log("the context of func2 is : "+ this);
    }
    console.log(this);
    func2();
  }
  Func1(15);  //It behaves like a regular function and the 'this' inside the function is pointing to the global object "Window" since it is the outer object.
  // var func1=new Func1(15); will makes Func1() function behave like a constructor and give an object for func1. The 'this' inside the function is pointing to Func1 object since the function creates that object. 


  function Circle(radius){
    console.log(this);
  }

  var myCircle= new Circle(10); //Circle function behaves like a constructor.
 
/* To save the memory space, prototype can be used 
so that all onjects of the same class share the same fucntion. */

Circle.prototype.getArea=
function (){
    return Math.PI * Math.pow(this.radius,2);
};

/* 'this' inside a function that is also inside a function
is pointing to the global object that is window object. That is why
var self= this is used in the following example to get around that problem.
*/

// Object literals and "this"
var literalCircle = {
    radius: 10,
  
    getArea: function () {
      var self = this;
      console.log(this);
  
      var increaseRadius = function () {
        self.radius = 20;
      };
      increaseRadius();
      console.log(this.radius);
  
      return Math.PI * Math.pow(this.radius, 2);
    }
  };
  
  console.log(literalCircle.getArea());

  /* There is another way to loop through an object properties. */

  var myObj={
    name: "HH",
    course: "HTML/CSS/JS",
    platform: "Coursera"

  };
  for(var prop in myObj){
    console.log(prop+ ": "+ myObj[prop]);
  }

  /* Since arrays are just onjects in JavaScript like functions, the 
  method in the above example can be used for arrays. 
  The indexs are array objects properties. */

  var names2=["HHH", "John", "Joe"];
  for(var names22 in names2){
    console.log("Hello " + names2[names22]);
  }


  //This is called "Immediately Invoked Function Expression" or "IIFE"

(function (name) {
    console.log("Hello " + name);
})("Coursea!");

