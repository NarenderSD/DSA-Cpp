// ******************************************** LOOPS ********************************************

// 1. For Loop
// 2. While Loop
// 3. Do-While Loop
// 4. Nested Loop
// 5. Infinite Loop
// 6. Loop Control Statements
// 7. Break Statement
// 8. Continue Statement
// 9. Goto Statement


// ******************************************  For Loop  ******************************************



// Syntax:
// for (initialization; condition; increment/decrement) {
    // code to be executed
// }

// #include <iostream>
// using namespace std;

// int main() {
//     // int n = 10;

//     for (int i = 1; i <= 10; i++) {
//         cout << i << " ";
//     }

//     cout << endl;

//     return 0;
// }

// *************************************** Sum of numbers from 1 to n ***************************************


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     int sum = 0;

//     for (int i = 1; i <= n; i++) {
//         sum += i;
//     }

//     cout << "Sum of numbers from 1 to " << n << " is " << sum << endl;

//     return 0;
// }
















// ******************************************  While Loop  ******************************************

// Print numbers from 1 to 10 using while loop

// #include <iostream>
// using namespace std;

// int main() {
//     int count = 1;

//     while (count <= 10) {
//         cout << count << " ";
//         count++;
//     }

//     cout << endl;

//     return 0;
// }



// #include <iostream>
// using namespace std;

// int main() {
//     int n = 35;
//     int count = 1;

//     while (count <= n) {
//         cout << count << " ";
//         count++;
//     }

//     cout << endl;

//     return 0;
// }




// ******************************************************** Break Statement ********************************************************

// #include <iostream>
// using namespace std;

// int main() {
//     int n = 10;

//     for (int i = 1; i <= n; i++) {
//         if (i == 5) {
//             break;
//         }
//         cout << i << " ";
//     }

//     cout << endl;

//     return 0;
// }


// keyword spicel regerved keyword in c++ language



// ------------------------------------------------------- Sum of all Odd numbers from 1 to n -------------------------------------------------------


// Step 1: Start
// Step 2: Read the value of n
// Step 3: Initialize sum = 0, i = 1
// Step 4: Repeat until i <= n
//     4.1 If i is odd, add i to sum
//     4.2 Increment i by 2
// Step 5: Print sum
// Step 6: End


// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     int sum = 0;
//     int i = 1;

//     while (i <= n) {
//         sum += i;
//         i += 2;
//     }

//     cout << "Odd Numbers:" << n << endl;

//     cout << "Sum of all odd numbers from 1 to " << n << " is " << sum << endl;

//     return 0;
// }



// ------------------------------------------------------- print Odd Number And Sum of all Odd numbers from 1 to n using for loop -------------------------------------------------------


// #include <iostream>
// using namespace std;

// int main() {
//     int n = 10;
//     int oddSum = 0;

//     for(int i=1; i<=n; i++) {
//         if(i%2 != 0) {
//             cout << i << " ";
//             oddSum += i;
//         }
//     }

//     cout << "odd Sum = " << oddSum << endl;

//     return 0;
// }










// ****************************************************  Do-While Loop  ****************************************************


// #include <iostream>
// using namespace std;

// int main() {
//     int n = 10;
//     int i = 1;

//     do {
//         cout << i << " ";
//         i++;
//     } while (i <= n);

//     cout << endl;

//     return 0;
// }




// ----------------------------------------- Check if a number is prime or not -----------------------------------------


//  Step 1: Start
//  Step 2: Read n
//  Step 3: If n <= 1, print "Not a prime number" and goto step 7
//  Step 4: Repeat from i = 2 to n/2
//      4.1 If n is divisible by i, print "Not a prime number" and goto step 7
//  Step 5: Print "Prime number"
//  Step 6: End
//  Step 7: Print "Not a prime number"
//  Step 8: End

// logic: A prime number is a number that is greater than 1 and divided by 1 or itself only. In other words, prime numbers can't be divided by other numbers than itself or 1. For example 2, 3, 5, 7, 11, 13, 17.... are the prime numbers.

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     bool isPrime = true;

//     if (n <= 1) {
//         isPrime = false;
//     } else {
//         // for (int i = 2; i <= n / 2; i++) {
//         for (int i = 2; i*i <= n; i++) {
//             if (n % i == 0) {
//                 isPrime = false;
//                 break;
//             }
//         }
//     }


//     if (isPrime) {
//         cout << n << " is a prime number" << endl;
//     } else {
//         cout << n << " is not a prime number" << endl;
//     }

//     return 0;
// }

// ------------------------------------------------------- Print Prime Numbers from 1 to n -------------------------------------------------------





// **************************************************** Nested Loop ****************************************************

// defination: A loop inside another loop is called a nested loop.

// Step 1: Start
// Step 2: Repeat from i = 1 to 5
//     2.1 Repeat from j = 1 to 5
//         2.1.1 Print "*"
//     2.2 Print new line
// Step 3: End

#include <iostream>
using namespace std;

int main() {
    int rows = 5;
    int cols = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= cols; j++) {
            cout << "*N* ";
        }    
        cout << endl;
    }

    return 0;    
}

