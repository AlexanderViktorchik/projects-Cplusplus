#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> a(n);
    //считывание
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    //обработка и вывод
    for (int i = n - 1; i >= 0; i--) {
        cout << a[i] << " ";
    }
    return 0;
}