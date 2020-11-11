#include <iostream>
using namespace std;
int main() {
    int a1, a2, b1, b2;
    cin >> a1 >> a2 >> b1 >> b2;
    if ( abs((a1 * 10 + a2) - (b1*10 + b2)) % 11 == 0 ) {
       cout << "YES"; 
    }
    else {
        cout << "NO";
    }
    return 0;
}