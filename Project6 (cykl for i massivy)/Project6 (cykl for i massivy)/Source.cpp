/*#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 100; i += 1) {
        cout << i << " ";
    }
    return 0;
}*///������� ����� �� 1 �� 100 ������������; ������ ���������� ��� ���� for �������� ���� while


//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//    int n;
//    cin >> n;//��� ��������� ������� �����: 5
//    vector <int> a(n);//���������� ���-�� "�����" �������: 5; ������� ����� => 0 1 2 3 4
//    //����������
//    for (int i = 0; i < n; i++) {//��������� ��������� ������ ���������� ������� � �������� ��� �������� 0 �� 4��
//        cin >> a[i];//�������� ������������������ �� ����� 5�� �����
//    }
//    //��������� � �����
//    for (int i = n - 1; i >= 0; i--) {//������� �������� ��������� � �������� ������� ������� � �������� ��� �������� 4 �� 0��
//        cout << a[i] << " ";
//    }
//    return 0;
//}//������� �������� ��������� � �������� �������


//#include <iostream>
//#include <vector>
//using namespace std;
//int main() {
//    int n;
//    cin >> n;
//    vector <int> a;
//    //����������
//    for (int i = 0; i < n; i++) {
//        int temp;
//        cin >> temp;
//        if (temp > 0) {
//            a.push_back(temp);
//        }
//    }
//    //��������� � �����
//    for (int i = a.size() - 1; i >= 0; i--) {
//        cout << a[i] << " ";
//    }
//    return 0;
//}//������� ������ ������������� �������� ��������� � �������� �������


// #include <iostream>
// #include <vector>
// using namespace std;
// int main() {
//    int n;
//    cin >> n;
//    vector <int> a;
//    //����������
//    for (int i = 0; i < n; i++) {
//        int temp;
//        cin >> temp;
//        a.push_back(temp);
//    }
//    //���������
//    int num_min = 0;
//    for (int i = 0; i < n; i++) {
//        if (a[i] < a[num_min]) {
//            num_min = i;
//        }
//    }
//    //����� ���������
//    int temp;
//    temp = a[0];
//    a[0] = a[num_min];
//    a[num_min] = temp;
//    //�����
//    for (auto now : a) {
//        cout << now << " ";
//    }   
//    return 0;
// }//���������� ���� ������, ������� ����� ����� ��������, 
 //� ������ ��� ������� � 1�� ��������� � �������


#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector <int> a;
    //����������
    for (int i = 0; i < n; i++) {
        int temp;
        cin >> temp;
        a.push_back(temp);
    }
    //���������
    for (int j = 0; j < n; j++) {
        int num_min = j;
        for (int i = j; i < n; i++) {
            if (a[i] < a[num_min]) {
                num_min = i;
            }
        }
        //����� ���������
        int temp;
        temp = a[j];
        a[j] = a[num_min];
        a[num_min] = temp;
    }
    //�����
    for (auto now : a) {
        cout << now << " ";
    }   
    return 0;
}//���������� ���� ������, ������� ����� ����� ��������, 
 //� ������ ��� ������� � 1�� ��������� � �������, 
 //� ����� ������ ���� ����� n ���: ���� j, 
 //-> � ����� �������� ���������� �� ����������� �� ����������� �� �����������
