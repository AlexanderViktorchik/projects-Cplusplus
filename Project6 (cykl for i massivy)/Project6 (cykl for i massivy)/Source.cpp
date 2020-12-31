/*#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 100; i += 1) {
        cout << i << " ";
    }
    return 0;
}*///выводит числа от 1 до 100 включительно; пример показывает как цикл for заменяет цикл while


//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//    int n;
//    cin >> n;//для понимания примера введём: 5
//    vector <int> a(n);//записалось кол-во "ячеек" массива: 5; индексы ячеек => 0 1 2 3 4
//    //считывание
//    for (int i = 0; i < n; i++) {//заполняем поочерёдно ячейки значениями начиная с элемента под индексом 0 по 4ый
//        cin >> a[i];//вводится последовательность из любых 5ти чисел
//    }
//    //обработка и вывод
//    for (int i = n - 1; i >= 0; i--) {//выводим значения поочерёдно в обратном порядке начиная с элемента под индексом 4 по 0ой
//        cout << a[i] << " ";
//    }
//    return 0;
//}//выводим значения поочерёдно в обратном порядке


//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//    vector <int> a;
//    //считывание
//    for (int i = 0; i < n; i++) {
//        int temp;
//        cin >> temp;
//        if (temp > 0) {
//            a.push_back(temp);
//        }
//    }
//    //обработка и вывод
//    for (int i = a.size() - 1; i >= 0; i--) {
//        cout << a[i] << " ";
//    }
//    return 0;
//}//выводим только положительные значения поочерёдно в обратном порядке


// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//    int n;
//    cin >> n;
//    vector <int> a;
//    //считывание
//    for (int i = 0; i < n; i++) {
//        int temp;
//        cin >> temp;
//        a.push_back(temp);
//    }
//    //обработка
//    int num_min = 0;
//    for (int i = 0; i < n; i++) {
//        if (a[i] < a[num_min]) {
//            num_min = i;
//        }
//    }
//    //обмен элементов
//    int temp;
//    temp = a[0];
//    a[0] = a[num_min];
//    a[num_min] = temp;
//    //вывод
//    for (auto now : a) {
//        cout << now << " ";
//    }   
//    return 0;
// }//перебирает весь массив, находит самое малое значение, 
 //и меняет его местами с 1ым значением в массиве


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
    for (int j = 0; j < n; j++) {
        int num_min = j;
        for (int i = j; i < n; i++) {
            if (a[i] < a[num_min]) {
                num_min = i;
            }
        }
        //обмен элементов
        int temp;
        temp = a[j];
        a[j] = a[num_min];
        a[num_min] = temp;
    }
    //вывод
    for (auto now : a) {
        cout << now << " ";
    }   
    return 0;
}//перебирает весь массив, находит самое малое значение, 
 //и меняет его местами с 1ым значением в массиве, 
 //и потом делает тоже самое n раз: цикл j, 
 //-> в итоге значения становятся по возрастанию от наименьшего до наибольшего
