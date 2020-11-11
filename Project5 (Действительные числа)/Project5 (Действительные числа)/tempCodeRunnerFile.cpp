#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int ent = 0, sum = 0, sumKv = 0, i = 0;
    double q;
    cin >> ent;
    while (1) {
        sum = sum + ent;
        sumKv = sumKv + ent*ent;
        q = sqrt(sumKv - sum * sum / i) / i - 1;
        cin >> ent;
        if (ent == 0) {
            break;
        }
        i++; 
    }
    cout << q; 
    return 0;
}