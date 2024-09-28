//************************************************ Operators ************************************************


// Operators are special symbols in C++ that are used to perform specific operations on operands.

// C++ provides a rich set of built-in operators. Operators are used to perform operations on variables and values.

// C++ provides the following types of operators:

// Arithmetic Operators
// Relational Operators
// Logical Operators
// Bitwise Operators
// Assignment Operators
// Misc Operators   
// Conditional Operator
// Comma Operator   
// sizeof Operator
// Pointer Operator
// Member Selection Operator
// Bitwise Complement Operator
// Logical Not Operator
// Increment and Decrement Operators
// Address Of Operator  
// Dereference Operator


//************************************************ Arithmetic Operators ************************************************

// Arithmetic operators are used to perform mathematical operations like addition, subtraction, multiplication, etc.

// Operator	Description
// +	Addition: Adds two operands
// -	Subtraction: Subtracts two operands
// *	Multiplication: Multiplies two operands
// /	Division: Divides the first operand by the second
// %	Modulus: Returns the remainder of the division

// -------------------------------------------------- Example: Arithmetic Operators --------------------------------------------------
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     int b = 20;
//     int sum = a + b;
//     int diff = a - b;
//     int product = a * b;
//     int div = a / b;
//     int mod = a % b;

//     cout << "Sum: " << sum << endl;
//     cout << "Difference: " << diff << endl;
//     cout << "Product: " << product << endl;
//     cout << "Division: " << div << endl;
//     cout << "Modulus: " << mod << endl;

//     return 0;
// }







// Output
// Sum: 30
// Difference: -10
// Product: 200
// Division: 0
// Modulus: 10



// _________________________________________________________ Program sum of two numbers _________________________________________________________
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter First Number: ";
    cin >> a;

    cout << "Enter Second Number: ";
    cin >> b;
    int sum = a + b;
    cout << "Sum: " << sum << endl;
    return 0;
}






//************************************************ Relational Operators ************************************************

// Relational operators are used to compare two values.

// Operator	Description

// ==	Equal to: Checks if the values of two operands are equal or not, if yes then condition becomes true.
// !=	Not equal to: Checks if the values of two operands are equal or not, if values are not equal then condition becomes true.
// >	Greater than: Checks if the value of the left operand is greater than the value of the right operand, if yes then condition becomes true.
// <	Less than: Checks if the value of the left operand is less than the value of the right operand, if yes then condition becomes true.
// >=	Greater than or equal to: Checks if the value of the left operand is greater than or equal to the value of the right operand, if yes then condition becomes true.
// <=	Less than or equal to: Checks if the value of the left operand is less than or equal to the value of the right operand, if yes then condition becomes true.

// -------------------------------------------------- Example: Relational Operators --------------------------------------------------
// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     int b = 20;

//     cout << (a == b) << endl;
//     cout << (a != b) << endl;
//     cout << (a > b) << endl;
//     cout << (a < b) << endl;
//     cout << (a >= b) << endl;
//     cout << (a <= b) << endl;

//     return 0;
// }

// Output
// 0
// 1
// 0
// 1
// 0
// 1





//************************************************ Logical Operators ************************************************

// Logical operators are used to combine two or more conditions.

// Operator	Description

// &&	Logical AND: Returns true if both conditions are true.
// ||	Logical OR: Returns true if one of the conditions is true.
// !	Logical NOT: Returns true if the condition is false.

// -------------------------------------------------- Example: Logical Operators --------------------------------------------------
// #include <iostream>
// using namespace std;


// int main() {
//     int a = 10;
//     int b = 20;

//     cout << (a == 10 && b == 20) << endl;
//     cout << (a == 10 || b == 10) << endl;
//     cout << !(a == 10) << endl;

//     return 0;
// }


// Output
// 1
// 1
// 0





//************************************************ Bitwise Operators ************************************************

// Bitwise operators are used to perform bitwise operations on integer operands.

// Operator	Description

// &	Bitwise AND: Sets each bit to 1 if both bits are 1.
// |	Bitwise OR: Sets each bit to 1 if one of the bits is 1.
// ^	Bitwise XOR: Sets each bit to 1 if only one of the bits is 1.
// ~	Bitwise NOT: Inverts all the bits.
// <<	Left shift: Shifts the bits of the number to the left by the specified number of positions.


// -------------------------------------------------- Example: Bitwise Operators --------------------------------------------------
// #include <iostream>
// using namespace std;


// int main() {
//     int a = 5; // 101
//     int b = 6; // 110

//     cout << (a & b) << endl; // 100 = 4
//     cout << (a | b) << endl; // 111 = 7
//     cout << (a ^ b) << endl; // 011 = 3
//     cout << (~a) << endl; // 11111111111111111111111111111010 = -6
//     cout << (a << 1) << endl; // 1010 = 10

//     return 0;
// }


// Output
// 4
// 7
// 3
// -6
// 10





//************************************************ Assignment Operators ************************************************

// Assignment operators are used to assign values to variables.

// Operator	Description

// =	Assigns the value of the right side of the operand to the left side of the operand.
// +=	Add and assign: Adds the right operand to the left operand and assigns the result to the left operand.
// -=	Subtract and assign: Subtracts the right operand from the left operand and assigns the result to the left operand.
// *=	Multiply and assign: Multiplies the right operand with the left operand and assigns the result to the left operand.
// /=	Divide and assign: Divides the left operand by the right operand and assigns the result to the left operand.
// %=	Modulus and assign: Takes modulus using two operands and assigns the result to the left operand.
// <<=	Left shift and assign: Shifts the bits of the left operand to the left by the number of bits specified by the right operand and assigns the result to the left operand.
// >>=	Right shift and assign: Shifts the bits of the left operand to the right by the number of bits specified by the right operand and assigns the result to the left operand.
// &=	Bitwise AND and assign: Sets each bit to 1 if both bits are 1 and assigns the result to the left operand.
// ^=	Bitwise XOR and assign: Sets each bit to 1 if only one of the bits is 1 and assigns the result to the left operand.
// |=	Bitwise OR and assign: Sets each bit to 1 if one of the bits is 1 and assigns the result to the left operand.

// -------------------------------------------------- Example: Assignment Operators --------------------------------------------------

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     int b = 20;

//     a += b;
//     cout << a << endl;

//     a -= b;
//     cout << a << endl;

//     a *= b;
//     cout << a << endl;

//     a /= b;
//     cout << a << endl;

//     a %= b;
//     cout << a << endl;

//     a <<= 1;
//     cout << a << endl;

//     a >>= 1;
//     cout << a << endl;

//     a &= b;
//     cout << a << endl;

//     a ^= b;
//     cout << a << endl;

//     a |= b;
//     cout << a << endl;

//     return 0;
// }


// Output
// 30
// 10
// 200
// 10
// 10
// 20
// 10
// 0
// 20
// 20





//************************************************ Unary Operators ************************************************

// Unary operators are used to perform operations on a single operand.

// Operator	Description

// +	Unary plus: Indicates positive value.
// -	Unary minus: Negates the value of the operand.
// ++	Increment: Increases the value of the operand by 1.
// --	Decrement: Decreases the value of the operand by 1.
// !	Logical NOT: Inverts the value of the operand.

// -------------------------------------------------- Example: Unary Operators --------------------------------------------------

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10;

//     cout << +a << endl;
//     cout << -a << endl;

//     cout << ++a << endl;
//     cout << --a << endl;


//     return 0;
// }


// Output
// 10
// -10
// 11
// 10
// 0





//************************************************ Ternary Operator ************************************************

// The ternary operator is a conditional operator that returns a value based on the condition.

// Syntax

// condition ? value1 : value2

// If the condition is true, the ternary operator returns value1; otherwise, it returns value2.

// -------------------------------------------------- Example: Ternary Operator --------------------------------------------------

// #include <iostream>
// using namespace std;

// int main() {
//     int a = 10;
//     int b = 20;  

//     int max = (a > b) ? a : b;
//     cout << max << endl;

//     return 0;
// }


// Output
// 20




