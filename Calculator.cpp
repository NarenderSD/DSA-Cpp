// ***************************************** Advance Calculator *****************************************


// use all operators function and feched

// es m am value and data type seclect kar k calculate kar sakta ho


#include <iostream>
#include <cmath> // for pow() and sqrt()

using namespace std;

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
double exponentiate(double base, double exponent);
double squareRoot(double number);

int main() {
    char choice;
    do {
        double num1, num2;
        int operation;

        cout << "Advanced Calculator" << endl;
        cout << "Select operation:" << endl;
        cout << "1. Addition (+)" << endl;
        cout << "2. Subtraction (-)" << endl;
        cout << "3. Multiplication (*)" << endl;
        cout << "4. Division (/)" << endl;
        cout << "5. Exponentiation (^)" << endl;
        cout << "6. Square Root (√)" << endl;
        cout << "Enter operation (1-6): ";
        cin >> operation;

        if (operation == 6) { // Square root only requires one number
            cout << "Enter number: ";
            cin >> num1;
            cout << "Square Root of " << num1 << " is " << squareRoot(num1) << endl;
        } else {
            cout << "Enter first number: ";
            cin >> num1;
            cout << "Enter second number: ";
            cin >> num2;

            switch (operation) {
                case 1:
                    cout << "Result: " << add(num1, num2) << endl;
                    break;
                case 2:
                    cout << "Result: " << subtract(num1, num2) << endl;
                    break;
                case 3:
                    cout << "Result: " << multiply(num1, num2) << endl;
                    break;
                case 4:
                    if (num2 != 0) {
                        cout << "Result: " << divide(num1, num2) << endl;
                    } else {
                        cout << "Error: Division by zero!" << endl;
                    }
                    break;
                case 5:
                    cout << "Result: " << exponentiate(num1, num2) << endl;
                    break;
                default:
                    cout << "Invalid operation!" << endl;
            }
        }

        cout << "Do you want to perform another calculation? (y/n): ";
        cin >> choice;

    } while (choice == 'y' || choice == 'Y');

    cout << "Thank you for using the calculator!" << endl;
    return 0;
}

// Function definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

double exponentiate(double base, double exponent) {
    return pow(base, exponent);
}

double squareRoot(double number) {
    return sqrt(number);
}
// Output
// Advanced Calculator
// Select operation:
// 1. Addition (+)
// 2. Subtraction (-)
// 3. Multiplication (*)
// 4. Division (/)
// 5. Exponentiation (^)
// 6. Square Root (√)
// Enter operation (1-6): 1
// Enter first number: 10
// Enter second number: 20
// Result: 30
// Do you want to perform another calculation? (y/n): y