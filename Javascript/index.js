//1.  Ways to print something 
// console.log("Hello World");
// alert("Me")
// document.write("This is document write")

// 2 Javascript console api[Application Programming Interface ]
// console.log("Hello World");
// console.warn("This is warning");
// console.error("error");
// console.clear();
// console.assert();

// 3. Javascript Variables.
// What are Variable? - Containers to store data values
    // var number1 = 34;
    // var number2 = 56;
    // console.log(number1 + number2);

    // 4. Data types in JavaScript
    // Numbers
    var num1 = 455;
    var num2 = 56.76;
    // String
    var str1 = 'This is a string';
    var str2 = "This is a string";
    // Objects
    var marks = {
        ravi :34,
        shubham:78,
        hari:99.98,
    }
    // Boolean
    var a = true;
    var b = false;
    // console.log(marks);

    var und = undefined;
    // console.log(und)

    /*
    A very high level there are two types of data types is JavaScript
    1 Primitive : undefined,null,number , string,boolean , symbol
    2 Reference : Arrays and Objects
    
    */

    var arr = [1,2,3,4,5]

    // Operators in Javascript

    // Arithmetic Operators
    var a = 100;
    var b=10;
    // console.log("The value of a + b is: ",a+b);
    // console.log("The value of a - b is: ",a-b);
    // console.log("The value of a * b is: ",a*b);
    // console.log("The value of a / b is: ",a/b);

    // Assignment Operators
    var c=b;
    // c+=2
    c-=2 //c=c-2
    // console.log(c);

    // Comparison Operators


    // Logical operators

    function avg(a,b){
        return (a+b)/2;
    }

    c=avg(4,6);
    // console.log(c);

    // Conditionals in js

    var age =8;
    // If else ladder
    /*
    if (age>8){
        console.log('You are not a kid')
    }
    else{
        console.log('You are a kid')
    }

    // Single if statement
    if (age>8){
        console.log('You are not a kid')
    }
    */

    var arr=[1,2,3,4,5,6,7];
    console.log(arr);
    for(var i=0; i<arr.length;i++){
        console.log(arr[i]);
    }

    arr.forEach(function(element){
        console.log(element)
    })