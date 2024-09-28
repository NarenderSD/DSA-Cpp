// ********************************************** Ternary  **********************************************



#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    (n % 2 == 0) ? cout << "The number is even" << endl : cout << "The number is odd" << endl;
}

// Output: Enter a number: 5
// The number is odd
// Output: Enter a number: 6
// The number is even
