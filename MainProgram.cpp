// ============================================================================
//  LAB: Relational & Logical Operators, Conditional Statements
//  Course: CMP1001 – Introduction to Programming (C++)
//  Duration: 60 minutes
//  
//  Description:
//    In this lab you will practice using relational operators (==, !=, <, >,
//    <=, >=), logical operators (&&, ||, !), and conditional statements
//    (if, else if, else, nested ifs). By the end you should be comfortable
//    combining these tools to make decisions in your programs.
//
//  Instructions:
//    1. Read every comment carefully before writing code.
//    2. Look for "// TODO:" markers — that is where YOU write code.
//    3. Compile often:  g++ MainProgram.cpp -o lab && ./lab
//    4. Test each section before moving on.
//    5. Do NOT delete any provided code or comments.
//
//  Reminder: Everything is in ONE file. Do NOT create header files.
// ============================================================================

#include <iostream>
using namespace std;

// ============================================================================
//  SECTION 1 — WARM-UP  (5–10 minutes)
//  Goal: Refresh your memory on cin, cout, variables, and simple arithmetic.
// ============================================================================

void section1_warmup() {
    cout << "=== SECTION 1: WARM-UP ===" << endl;
    
    
    // -----------------------------------------------------------------------
    // Exercise 1.1
    // Declare two integer variables, ask the user to enter values for both,
    // then print their sum.
    // -----------------------------------------------------------------------

    // TODO: Declare two int variables (a and b)

    // TODO: Prompt the user and read both values with cin

    // TODO: Print "Sum = " followed by the result
  
    int num1, num2;
    int sum;
    
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;
    
    sum = num1 + num2;
    
    cout << "Sum of the numbers is: " << sum << endl;

    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 1.2
    // Ask the user for a temperature in Celsius.
    // Convert it to Fahrenheit using:  F = C * 9/5 + 32
    // Print the result.
    // -----------------------------------------------------------------------

    // TODO: Declare a double variable for Celsius

    // TODO: Prompt and read the value

    // TODO: Calculate Fahrenheit and print it
    
    double fahrenheit, celsius;
    cout << "Enter temp in celsius: ";
    cin >> celsius;
    fahrenheit = celsius * (9/5) + 32;
    cout << "Temp in fahrenheit: " << fahrenheit;
    

    cout << endl;
}

// ============================================================================
//  SECTION 2 — CORE CONCEPTS  (10–15 minutes)
//  Topic: Relational operators, logical operators, and if/else basics.
// ============================================================================

void section2_coreConcepts() {
    cout << "=== SECTION 2: CORE CONCEPTS ===" << endl;

    // --- Mini-Reference (read these, do NOT delete) ------------------------
    //
    //  Relational operators compare two values and return true or false:
    //    ==  equal to          !=  not equal to
    //    <   less than         >   greater than
    //    <=  less or equal     >=  greater or equal
    //
    //  Logical operators combine boolean expressions:
    //    &&  AND  — true when BOTH sides are true
    //    ||  OR   — true when AT LEAST ONE side is true
    //    !   NOT  — flips true ↔ false
    //
    //  Conditional statement pattern:
    //    if (condition) {
    //        // runs when condition is true
    //    } else if (anotherCondition) {
    //        // runs when the first is false and this one is true
    //    } else {
    //        // runs when none of the above are true
    //    }
    // -----------------------------------------------------------------------

    // --- Example (study this) ----------------------------------------------
    int age = 20;
    if (age >= 18) {
        cout << "Example: You are an adult." << endl;
    } else {
        cout << "Example: You are a minor." << endl;
    }
    // -----------------------------------------------------------------------

    // --- Example with logical operator (study this) ------------------------
    bool hasID = true;
    if (age >= 18 && hasID) {
        cout << "Example: Access granted." << endl;
    } else {
        cout << "Example: Access denied." << endl;
    }
    cout << endl;
    // -----------------------------------------------------------------------

    // -----------------------------------------------------------------------
    // Exercise 2.1
    // Ask the user for an integer. Print whether it is positive, negative,
    // or zero using if / else if / else.
    // -----------------------------------------------------------------------

    // TODO: Declare an int variable

    // TODO: Prompt and read it

    // TODO: Use if / else if / else to print the correct message
    
    int num;
    cout << "Enter a number: " << endl;
    
    if(num > 0){
        cout << "Number is positive" << endl;
    }else if(num < 0){
         cout << "Number is negative" << endl;
    }else{
         cout << "Number is zero" << endl;
    }

    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 2.2
    // Ask the user for two integers. Using ONLY relational operators and
    // cout, print:
    //   "Equal"        if they are the same
    //   "First is bigger"  if the first is larger
    //   "Second is bigger" otherwise
    // -----------------------------------------------------------------------

    // TODO: Declare two ints, prompt, and read them

    // TODO: Write the if / else if / else chain
    
    int firstNum, secondNum;
    cout << "Enter first number: " << endl;
    cin >> firstNum;
    cout << "Enter second number: " << endl;
    cin >> secondNum;
    
    if (firstNum == secondNum){
        cout << "Equal" << endl;
    }else if(firstNum > secondNum){
        cout << "First is bigger" << endl;
    }else{
        cout << "Second is bigger" << endl;
    }
    
    cout << endl;
}

// ============================================================================
//  SECTION 3 — GUIDED EXERCISES  (25–30 minutes)
//  These get progressively harder. Take your time.
// ============================================================================

void section3_guidedExercises() {
    cout << "=== SECTION 3: GUIDED EXERCISES ===" << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.1 — Even or Odd
    // Ask the user for an integer. Print whether it is even or odd.
    // Hint: use the modulus operator (%).
    //   number % 2 == 0  means even.
    // -----------------------------------------------------------------------

    // TODO: Implement the even/odd checker
    
    int number;
    
    cout << "Enter an integer: ";
    cin >> number;
    
    if(number % 2 == 0){
        cout << "Number is even" << endl;
    }else{
        cout << "Number is odd" << endl;
    }

    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.2 — Simple Grade Calculator
    // Ask the user for a numeric score (0–100).
    // Print the letter grade using this scale:
    //   90–100 → A
    //   80–89  → B
    //   70–79  → C
    //   60–69  → D
    //   below 60 → F
    //
    // Also print "Invalid score" if the input is < 0 or > 100.
    // -----------------------------------------------------------------------

    // TODO: Implement the grade calculator
    
    int grade;
    
    cout << "Enter a grade: ";
    cin >> grade;
    
    if (grade < 0 || grade > 100){
        cout << "Invalid score";
    }else if(grade >= 90) {
        cout << "Grade: A" << endl;
    }
    else if(grade >= 80){
        cout << "Grade: B" << endl;
    }
    else if(grade >= 70){
        cout << "Grade: C" << endl;
    }
    else if(grade >= 60) {
        cout << "Grade: D" << endl;
    }else{
        cout << "Grade: F" << endl;
    }
    
    

    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.3 — Leap Year Checker
    // Ask the user for a year (int).
    // A year is a leap year if:
    //   (divisible by 4 AND not divisible by 100)
    //   OR divisible by 400
    //
    // Print whether it is a leap year or not.
    // Hint: you will need both && and || in one condition.
    // -----------------------------------------------------------------------

    // TODO: Implement the leap year checker
    int year;
    
    cout << "Enter the year:";
    cin >> year;
    
    if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        cout << "Is a leap year" << endl;
    }
        cout << "Is not a leap year" << endl;
    }
    

    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.4 — Triangle Validator
    // Ask the user for three side lengths (doubles).
    // A valid triangle must satisfy ALL of:
    //   side1 + side2 > side3
    //   side1 + side3 > side2
    //   side2 + side3 > side1
    //
    // If valid, additionally classify it:
    //   - Equilateral (all sides equal)
    //   - Isosceles   (exactly two sides equal)
    //   - Scalene     (no sides equal)
    //
    // Hint: use nested if statements.
    // -----------------------------------------------------------------------

    // TODO: Implement the triangle validator and classifier
    
    double side1, side2, side3;
    int sum1, sum2, sum3;
    
    cout << "Enter lenghts 1: ";
    cin >> side1;
    cout << "Enter lenghts 2: ";
    cin >> side2;
    cout << "Enter lenghts 3: ";
    cin >> side3;
    
    sum1 = side2 + side3;
    sum2 = side1 + side3;
    sum3 = side1 + side2;
    
    if(sum3 > side3 && sum2 > side2 && sum2 > side1){
        if(side1 == side2 && side2 == side3){
            cout << "Equilateral triangle" << endl;
        }
        else if(side1 == side2 || side1 == side3 || side2 == side3){
          cout << "Isosceles triangle" << endl;
        }
        else{
        cout << "Scalene triangle" << endl;
        }
    }
    
    cout << endl;

    // -----------------------------------------------------------------------
    // Exercise 3.5 — Ticket Price Calculator
    // A cinema charges different prices:
    //   - Children (age < 12):       $5
    //   - Students (age 12–24):      $8
    //   - Adults  (age 25–64):       $12
    //   - Seniors (age >= 65):       $7
    //
    // Additional rules:
    //   - If it is a weekday (user enters 'W') everyone gets $2 off.
    //   - If it is a weekend (user enters 'E') no discount.
    //
    // Ask for the customer's age and day type ('W' or 'E').
    // Print the final ticket price.
    // Hint: calculate base price first, then apply discount.
    // -----------------------------------------------------------------------

    // TODO: Implement the ticket price calculator
    
    int age;
    char day;
    
    cout << "Enter your age:";
    cin >> age;
    cout << "Enter W for weekday E for weekend:";
    cin >> day;
    
    if(day == 'W'){
        if(age < 12){
            cout << "Ticket price is $3" << endl;
        }else if(age > 12 && age <= 24){
            cout << "Ticket price is $6" << endl;
        }else if(age >= 25 && age <= 64){
            cout << "Ticket price is $10" << endl;
        }else{
            cout << "Ticket price is $5" << endl;
        }
    }else{
        if(age < 12){
            cout << "Ticket price is $5" << endl;
        }else if(age > 12 && age <= 24){
            cout << "Ticket price is $8" << endl;
        }else if(age >= 25 && age <= 64){
            cout << "Ticket price is $12" << endl;
        }else{
            cout << "Ticket price is $7" << endl;
        }
    }

    cout << endl;
}

// ============================================================================
//  SECTION 4 — CHALLENGE  (10 minutes)
//  Push yourself! These are a bit harder and more open-ended.
// ============================================================================

void section4_challenge() {
    cout << "=== SECTION 4: CHALLENGE ===" << endl;

    // -----------------------------------------------------------------------
    // Challenge 4.1 — Mini Login System
    //
    // Simulate a simple login:
    //   - The correct username is "admin" and the correct PIN is 1234.
    //   - Ask the user to enter a username (string) and a PIN (int).
    //   - If BOTH match → print "Login successful!"
    //   - If the username is wrong → print "Unknown user."
    //   - If the username is right but PIN is wrong →
    //       print "Incorrect PIN."
    //
    // Think carefully about the ORDER of your checks.
    // -----------------------------------------------------------------------

    // TODO: Implement the mini login system
    
    string username;
    int pin;
    
    cout << "Enter username: ";
    cin >> username;
    cout << "Enter pin: ";
    cin >> pin;
    
    if(username == 'admin' && pin == 1234){
        cout << "Login successful" << endl;
    }else if(username != 'admin' && pin == 1234){
        cout << "Unknown user" << endl;
    }else if (username == 'admin' && pin == 1234){
        cout << "Incorrect pin" << endl;
    }
    
    cout << endl;

    // -----------------------------------------------------------------------
    // Challenge 4.2 — Body Mass Index (BMI) Advisor
    //
    // Ask the user for their weight in kg and height in meters.
    // Calculate BMI = weight / (height * height)
    //
    // Print the BMI value AND the category:
    //   BMI < 18.5          → Underweight
    //   18.5 <= BMI < 25.0  → Normal weight
    //   25.0 <= BMI < 30.0  → Overweight
    //   BMI >= 30.0         → Obese
    //
    // Also handle invalid input:
    //   - weight <= 0 or height <= 0 → print "Invalid input"
    // -----------------------------------------------------------------------

    // TODO: Implement the BMI advisor
    
    float weight, height, BMI;
    
    cout << "Enter weight in kg: ";
    cin >> weight;
    cout << "Enter height in m: ";
    cin >> height;
    
    if(weight <= 0 || height <= 0){
        cout << "Invalid numbers" << endl;
        cout << "Enter weight in kg: ";
        cin >> weight;
        cout << "Enter height in m: ";
        cin >> height;
    }
    
    BMI == weight / (height * height);
    
    if(BMI < 18.5){
        cout << "Underwight" << endl;
    }else if(BMI >= 18.5 && BMI < 25){
        cout << "Normal weight" << endl;
    }else if(BMI >= 25 && BMI < 30){
        cout << "overweight" << endl;
    }else{
        cout << "Obese" << endl;
    }
    

    cout << endl;
}

// ============================================================================
//  MAIN — calls each section in order
// ============================================================================

int main() {
    cout << "============================================" << endl;
    cout << "  CMP1001 Lab: Relational & Logical Ops    " << endl;
    cout << "  Conditional Statements                   " << endl;
    cout << "============================================" << endl << endl;

    section1_warmup();
    section2_coreConcepts();
    section3_guidedExercises();
    section4_challenge();

    cout << "============================================" << endl;
    cout << "  Lab complete. Don't forget to submit!    " << endl;
    cout << "============================================" << endl;

    return 0;
}
