#include <iostream>
using namespace std;
int main() {
    int ent, i = 0;
    while (1) {
        cin >> ent;
        i++;
        if (ent == 0) {
            i--;
            cout << i;
            break;
        }
    }
    return 0;
}