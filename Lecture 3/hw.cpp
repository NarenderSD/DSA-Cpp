// ***************************** Sum of all numbers from 1 to N which are divisible by 3 *****************************


// Step 1: Start
// Step 2: Read the value of n
// Step 3: Initialize sum = 0, i = 1
// Step 4: Repeat from i = 1 to n
//     4.1 If i is divisible by 3, add i to sum
// Step 5: Print sum
// Step 6: End

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int sum = 0;

    for (int i = 1; i <= n; i++) {
        if (i % 3 == 0) {
            sum += i;
        }
    }

    cout << "Sum of all numbers from 1 to " << n << " which are divisible by 3 is " << sum << endl;

    return 0;
}

// Output: Enter a number: 10
// Sum of all numbers from 1 to 10 which are divisible by 3 is 18































// ******************************************* Print Factorial of a number N *******************************************

// Step 1: Start
// Step 2: Read the value of n
// Step 3: Initialize fact = 1
// Step 4: Repeat from i = 1 to n
//     4.1 Multiply fact by i
// Step 5: Print fact
// Step 6: End  



// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number: ";
//     cin >> n;

//     int fact = 1;

//     for (int i = 1; i <= n; i++) {
//         fact *= i;
//     }

//     cout << "Factorial of " << n << " is " << fact << endl;

//     return 0;
// }

// Output: Enter a number: 5
// Factorial of 5 is 120