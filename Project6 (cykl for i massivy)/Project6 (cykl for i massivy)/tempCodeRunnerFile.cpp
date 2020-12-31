#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> a;
    //считывание
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    //обработка
    int num_min = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] < a[num_min]) {
            num_min = i;
        }
    }
    int temp;
    temp = a[0];
    a[0] = a[num_min];
    a[num_min] = temp;
    //вывод
    for (auto now : a) {
        cout << now << " ";
    }   
    return 0;
}