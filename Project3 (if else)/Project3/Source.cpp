// #include <iostream>
// using namespace std;
// int main() {
//     int a;
//     cin >> a;
//     if (a > 0) {
//         cout << a;
//     } 
//     else
//     {
//         cout << -a;
//     }   
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a, b;
//     cin >> a >> b;
//     if (a * 2 == b) {
//          cout << "Yes";
//     } 
//     else {
//         cout << "No";
//     }
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int eyes, legs;
//     cin >> eyes >> legs;
//     if (eyes >= 8) {
//         if (eyes == 8)
//         {
//             cout << "spider";
//         }
//         else
//         {
//             cout << "scallop";
//         }   
//     } else {
//         if (legs == 4) {
//             cout << "cat";
//         } else (
//             cout << "bug";
//         )
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int eyes, legs;
//     cin >> eyes >> legs;
//     if (eyes == 8 && legs == 8)
//     {
//         cout << "AAAAAAA!!!!";
//     } 
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int year;
//     cin >> year;
//     bool mod400 = year % 400 == 0;
//     if ((year % 4 == 0 && year % 100 != 0) || mod400) {
//         cout << 366;
//     } 
//     else {
//         cout << 365;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int who_call;
//     cin >> who_call;
//     if (who_call == 1) {
//         cout << "football";
//     } 
//     else if (who_call == 2) {
//         cout << "C++";
//     } 
//     else {
//         cout << "Show";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int year;
//     cin >> year;
//     if (year % 4) {
//         cout << 365;
//     }
//     else {
//         cout << 366;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a;
//     cin >> a;
//     cout << (a % 2 == 0);
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a, b;
//     cin >> a >> b;
//     if (a > b || a == b) {
//         cout << a;
//     } 
//     else {
//         cout << b;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a, b;
//     cin >> a >> b;
//     if (a > b) {
//         cout << 1;
//     } 
//     else if (a < b) {
//         cout << 2;
//     }
//     else{
//         cout << 0;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if (a >= b && a >= c) {
//         cout << a;
//     } 
//     else if (b > a && b >= c) {
//         cout << b;
//     }
//     else {
//         cout << c;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a, b, c;
//     cin >> a >> b >> c;
//     if (a < c + b && b < a + c && c < a + b) {
//         cout << "YES";
//     } 
//     else {
//        cout << "NO"; 
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a1, a2, b1, b2;
//     cin >> a1 >> a2 >> b1 >> b2;
//     if (a1 == b1 || a2 == b2) {
//         cout << "YES";
//     }
//     else {
//         cout << "NO";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a1, a2, b1, b2;
//     cin >> a1 >> a2 >> b1 >> b2;
//     if (a1 == b1 && (a2 - 1 == b2 || a2 + 1 == b2)) {
//         cout << "YES";
//     }
//     else if (a2 == b2 && (a1 - 1 == b1 || a1 + 1 == b1)) {
//         cout << "YES";
//     }
//     else if ((b2 == a2 + 1 && b1 == a1 + 1) || (b2 == a2 - 1 && b1 == a1 + 1) || (b2 == a2 - 1 && b1 == a1 - 1) || (b2 == a2 + 1 && b1 == a1 - 1)) {
//         cout << "YES";
//     }
//     else {
//         cout << "NO";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     int a1, a2, b1, b2;
//     cin >> a1 >> a2 >> b1 >> b2;
//     if ( abs((a1 * 10 + a2) - (b1 * 10 + b2)) % 11 == 0 || abs((a1 * 10 + a2) - (b1 * 10 + b2)) % 9 == 0) {
//        cout << "YES"; 
//     }
//     else {
//         cout << "NO";
//     }
//     return 0;
// }

#include <iostream>
using namespace std;
int main() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    if ( abs((a1 * 10 + a2) - (b1 * 10 + b2)) % 11 == 0 || abs((a1 * 10 + a2) - (b1 * 10 + b2)) % 9 == 0 || a1 == b1 || a2 == b2) {
       cout << "YES"; 
    }
    else {
        cout << "NO";
    }
    return 0;
}