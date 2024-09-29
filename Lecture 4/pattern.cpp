
// ****************************************** patterns ******************************************


// Pattern 1
// 1
// 1 2
// 1 2 3
// 1 2 3 4
// 1 2 3 4 5

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << j << " ";
        }
        cout << endl;
    }
    return 0;
}

// Pattern 2
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}   

// Pattern 3
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int count = 1;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << count << " ";
            count++;
        }
        cout << endl;
    }
    return 0;
}


// Pattern type

// 1. Half Pyramid
// 2. Inverted Half Pyramid
// 3. Hollow Half Pyramid
// 4. Full Pyramid
// 5. Inverted Full Pyramid
// 6. Hollow Full Pyramid   
// 7. Mirrored Half Pyramid 
// 8. Mirrored Inverted Half Pyramid
// 9. Mirrored Hollow Half Pyramid
// 10. Mirrored Full Pyramid
// 11. Mirrored Inverted Full Pyramid   
// 12. Mirrored Hollow Full Pyramid
// 13. Half Diamond 
// 14. Inverted Half Diamond
// 15. Hollow Half Diamond  
// 16. Diamond  
// 17. Inverted Diamond
// 18. Hollow Diamond   
// 19. Mirrored Half Diamond
// 20. Mirrored Inverted Half Diamond
// 21. Mirrored Hollow Half Diamond
// 22. Mirrored Diamond
// 23. Mirrored Inverted Diamond
// 24. Mirrored Hollow Diamond
// 25. Number Pattern 1
// 26. Number Pattern 2
// 27. Number Pattern 3
// 28. Number Pattern 4


// Pattern 4
// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15



