#include <iostream>
using namespace std;
int main() {
    for (int i = 1; i <= 100; i += 1) {
        cout << i << " ";
    }
    return 0;
}//������� ����� �� 1 �� 100 ������������; ������ ���������� 1111 2222


#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;//��� ��������� ������� �����: 5
    vector <int> a(n);//���������� ���-�� "�����" �������: 5; ������� ����� => 0 1 2 3 4
    //����������
    for (int i = 0; i < n; i++) {//��������� ��������� ������ ���������� ������� � �������� ��� �������� 0 �� 4��
        cin >> a[i];//�������� ������������������ �� ����� 5�� �����
    }
    //��������� � �����
    for (int i = n - 1; i >= 0; i--) {//������� �������� ��������� � �������� ������� ������� � �������� ��� �������� 4 �� 0��
        cout << a[i] << " ";
    }
    return 0;
}