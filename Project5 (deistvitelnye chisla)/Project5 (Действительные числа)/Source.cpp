/*#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double pi = 3.1415, z, a;
    cin >> z >> a;
    cout << fixed << setprecision(3);
    cout << pi * z * z * a;
    return 0;
}*/ //��������� 3.1415�+014  �  314150000000000.000


/*#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a = 1, b = 2;
    double x = 2.5, y = 3.5;
    cout << a / x << endl << b / y;
    return 0;
}*///������� � ����� ���������� �����


/*#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    int a = 1, b = 2;
    cout << (double) a / b;
    return 0;
}*/// ������� 0.5, ���� �� ���������� ���������� int 


/*#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double x = 2.9, y = -3.5, z = 4.1;
    cout << trunc(x) << " " << trunc(y) << " " << trunc(z);
    return 0;
}*///���������� ������� "�� ��� ����� ����� - ��������"


/*#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double x = 2.9, y = -3.1;
    cout << floor(x) << " " << floor(y);
    return 0;
}*///���������� "����"; ������� 2 � -4


/*#include <iostream>
#include <iomanip>
using namespace std;
int main() {
    double x = 5.1, y = -3.9;
    cout << ceil(x) << " " << ceil(y);
    return 0;
}*///���������� "�����"; ������� 6 � -3


// #include <iostream>
// #include <iomanip>
// using namespace std;
// int main() {
//     double x = 6.5, y = -3.4, z = -7.6;
//     cout << round(x) << " " << round(y) << " " << round(z);
//     return 0;
// }//���������� ��� � ����������


// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     double ent;
//     cin >> ent;
//     cout << ent - floor(ent);
//     return 0;
// }//Sample Input:17.9  Sample Output:0.9


// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     double ent;
//     cin >> ent;
//     int ent1 = (floor(ent*10));
//     cout << ent1 % 10;
//     return 0;
// }//Sample Input:1.79  Sample Output:7


// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     double a, b, c, p, S;
//     cin >> a >> b >> c;
//     p = (a + b + c) / 2;
//     S = sqrt(p * (p - a) * (p - b) * (p - c));
//     cout << S;
//     return 0;
// }//Sample Input:3 4 5   Sample Output:6


// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     double percent, rub, cop, sum, piece, complSum;
//     cin >> percent >> rub >> cop;
//     percent = percent / 100; //������� �� ������� �������� ��������� �����
//     cop = cop / 100;//�������
//     sum = rub + cop;//��������� ����� - ����� + �������
//     piece = sum * percent;//����� ������� ����������� � ����� ���� � ��������� �����
//     complSum = sum + piece;//�������� �����
//     int rubOfComplsum = floor(complSum);//����� � ������� �� �������� �����
//     int copOfComlsum = trunc(complSum * 100);
//     copOfComlsum = copOfComlsum % 100;//����� � ��������� �� �������� �����
//     cout << rubOfComplsum << " " << copOfComlsum;
//     return 0;
// }//���������� ������ �� ������ ���������� P ��������� �������, ������� ������������ � ����� ������ � ����� ����. 
 //����� ���������� X ������ Y ������. ���������� ������ ������ ����� ���. 
 //��������� ������ ������� ��� �����: �������� ������ ����� ��� � ������ � ��������. ������� ����� ������ �������������.
 //Sample Input:12 179 56 
 //Sample Output: 201 10


// #include <iostream>
// #include <cmath>
// using namespace std;
// int main() {
//     double percent, rub, cop, years, sum, rubOfsum, copOfsum, i = 1;
//     cin >> percent >> rub >> cop >> years;
//     percent = percent / 100; //������� �� ������� �������� ��������� �����
//     cop = cop / 100;//�������
//     sum = rub + cop;//��������� ����� - ����� + �������

//     while (years >= i) {
//         sum = (sum * percent) + sum;
//         rubOfsum = floor(sum);
//         copOfsum = trunc(sum * 100);
//         copOfsum = copOfsum / 100 - rubOfsum;
//         sum = rubOfsum + copOfsum;
//         i++;
//     }

//     cout << rubOfsum << " " << copOfsum * 100;
//     return 0;
// }//���������� ������ �� ������ ���������� P ��������� �������, ������� ������������ � ����� ������ ����� ���. 
 //����� ���������� X ������ Y ������. ���������� ������ ������ ����� K ���. 
 //��������� ������ ������� ��� �����: �������� ������ ����� K ��� � ������ � ��������. 
 //������� ����� ������ �� ��������� ���� �������������. ���������� ����� ������ (� ������������� ������� ������ ������) ���������� ��������.
 //Sample Input:12 179 56 5 
 //Sample Output: 316 42


#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
    int ent = 0, sum = 0, i = 0;
    while (1) {
        sum = sum + ent;
        cin >> ent;
        if (ent == 0) {
            break;
        }
        i++;
    }
    cout << fixed << setprecision(11);
    cout << (double) sum / i; 
    return 0;
}//Sample Input:1 7 9 0   Sample Output: 5.66666666667
