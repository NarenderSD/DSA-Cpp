// *************************************************** Find charcter is Lowercase or Uppercase ****************************************************

// step 1: Start
// step 2: Declare a character variable ch
// step 3: Read the character from the user
// step 4: Check if the character is in uppercase or lowercase
// step 5: If the character is in uppercase, print "The character is in uppercase"
// step 6: If the character is in lowercase, print "The character is in lowercase"
// step 7: End



#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is in uppercase" << endl;
    } 
    else if (ch >= 'a' && ch <= 'z') {
        cout << "The character is in lowercase" << endl;
    } 
    else {
        cout << "Invalid character" << endl;
    }
}