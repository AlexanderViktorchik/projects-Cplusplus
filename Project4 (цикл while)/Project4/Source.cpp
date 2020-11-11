/*#include <iostream>
using namespace std;
int main() {
    int i = 1;
    while (i <= 100) {
        cout << i << " ";
        i = i + 1;
    }
    return 0;
}*/ // выводит подряд числа от 1 до 100

/*#include <iostream>
using namespace std;
int main() {
    int i = 1;
    while (1) {
        cout << i << " ";
        i = i + 1;
        if (i > 100) {
            break;
        }
    }
    return 0;
}*/ // делает то что и код выше, но через break;

/*#include <iostream>
using namespace std;
int main() {
    int min, now;
    cin >> now;
    min = now;
    while (now != 0) {
        if (now < min) {
            min = now;
        }
        cin >> now;
    }
    cout << min;
    return 0;
}*/ // выбирает наименьшее из введённых чисел

/*#include <iostream>
using namespace std;
int main() {
    int sum = 0, now;
    cin >> now;
    while (now != 0) {
        sum = sum + now;
        cin >> now;
    }
    cout << sum;
    return 0;
}*/ // считает сумму всех введённых чисел

/*#include <iostream>
using namespace std;
int main() {
    int part1, part2;
    cin >> part1 >> part2;
    int sum1 = 0, sum2 = 0;
    while (part1 != 0) {
        sum1 = sum1 + part1 % 10;
        part1 = part1 / 10; 
    } 
    while (part2 != 0) {
        sum2 = sum2 + part2 % 10;
        part2 = part2 / 10; 
    }
    if (sum1 == sum2) {
        cout << "lucky ticket =)";
    }
    else {
        cout << "unlucky ticket =(";
    }
    return 0;
}*/ // сравнивает два числа, если сумма их цифр равна -> "lucky ticket =)",
  // если нет то -> "unlucky ticket =(";

/*#include <iostream>
using namespace std;
int main() {
    int now = -1;
    while (now != 0) {
        cin >> now;
        if (now > 0) {
            cout << now << " ";
        }
    }
    return 0;
}*/ // из предложенных чисел выводит только положительные

/*#include <iostream>
using namespace std;
int main() {
    int now = -1;
    while (now != 0) {
        cin >> now;
        if (now <= 0) {
            continue;
        }
        cout << now << " ";
    }
    return 0;
}*/ // делает то что и код выше, но через continue

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main() {
//     int ent, out = 2, out1;
//     cin >> ent;
//     while (out >= 1) {
//         out = pow((floor(sqrt(ent))), 2);
//         cout << out << " ";
//         ent--;

//         // часть ниже делает, чтобы одинаковые числа не выводились
//         out1 = pow((floor(sqrt(ent))), 2);
//         if (out == out1) {
//             while (out == out1) {
//                ent--;
//                out = pow((floor(sqrt(ent))), 2);
//             } 
//         }
//     }
//     return 0;
// }// ввели 50, выведет 49 36 25 16 9 4 1

// #include <iostream>
// #include <math.h>
// using namespace std;
// int main() {
//     int N, ent = 1, out = 0;
//     cin >> N;
//     while (out < N) {
//        out = pow(ent, 2);
       
//        // часть ниже - проверка, чтобы само введённое число, если будет квадратом, выводилось бы; и чтобы большее число не выводилось
//        if (out > N) {
//            return 0;
//        } else if (out == N) {
//            cout << out;
//            return 0;
//        }
//        //

//        cout << out << " ";
//        ent++;
//     }
//     return 0;
// }// ввели 50, выведет 1 4 9 16 25 36 49


// #include <iostream>
// using namespace std;
// int main() {
//     int N, ent = 2, out;
//     cin >> N;
//     while (1) {
//         out = N % ent; 
//         if (out == 0) {
//             cout << ent;
//             return 0;
//         }
//         ent++;
//     }
//     return 0;
// }//Дано целое число, не меньшее 2. Выведите его наименьший натуральный делитель, отличный от 1.


// #include <iostream>
// using namespace std;
// int main() {
//     int N, ent = 1, out;
//     cin >> N;
//     cout << 1 << " ";
//     while (1) {
//         out = ent * 2;
//         if (N >= out) {
//             cout << out << " ";
//         } 
//         else {
//             return 0;
//         }
//         ent = ent * 2;
//     }
//     return 0;
// }//Sample Input: 50   Sample Output: 1 2 4 8 16 32


// #include <iostream>
// using namespace std;
// int main() {
//     int N, ent = 1, out;
//     cin >> N;
//     if (N == 1){
//         cout << "YES";
//         return 0;
//     }
//     while (1) {
//         out = ent * 2;
//         if (N == out) {
//             cout << "YES";
//             return 0;
//         } 
//         else if (N < out) {
//             cout << "NO";
//             return 0;
//         }
//         else {
//             ent = ent * 2;
//         }
//     }
//     return 0;
// }//Дано натуральное число N. Выведите слово YES, 
 //если число N является точной степенью двойки, или слово NO в противном случае.


/*#include <iostream>
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
}*///Sample Input: 1 7 9 0 5   Sample Output: 3


/*#include <iostream>
using namespace std;
int main() {
    int ent, sum = 0;
    while (1) {
        cin >> ent;
        sum = sum + ent;
        if (ent == 0) {
            cout << sum;
            break;
        }
    }
    return 0;
}*///Sample Input: 3 6 8 0   Sample Output: 17


// #include <iostream>
// using namespace std;
// int main() {
//     int max, now;
//     cin >> now;
//     max = now;
//     while (now != 0) {
//         if (now > max) {
//             max = now;
//         }
//         cin >> now;
//     }
//     cout << max;
//     return 0;
// }//выводит наибольшее число из ввелённых


#include <iostream>
using namespace std;
int main() {
    int max = 0, now, i = 0;
    cin >> now;
    while (now != 0) {
        if (now > max) {
            max = now;
            i = 1;
        } else if (now == max) {
            i++;
        }
        cin >> now;
    }
    cout << i;
    return 0;
}//Sample Input: 1 3 3 1 0   Sample Output: 2