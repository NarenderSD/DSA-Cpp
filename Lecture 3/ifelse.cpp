
// #include <iostream>
// using namespace std;

// int main() {
//     int age;
//     cout << "Enter your age: ";
//     cin >> age;

//     if (age >= 18) {
//         cout << "You are eligible to vote" << endl;
//     } 
//     else {
//         cout << "You are not eligible to vote" << endl;
//     }
// }





#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n % 2 == 0) {
        cout << "The number is even" << endl;
    } 
    else {
        cout << "The number is odd" << endl;
    }
}