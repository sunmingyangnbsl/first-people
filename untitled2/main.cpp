#include <iostream>
using namespace std ;
int main() {
    int A = 0;
    int B;
    B = rand()%90; // ����������Ʒ�Χ

    while(A != B) {
        cout << "������һ������" << endl;
        cin >> A;
            if (A > B) {
                cout << "���ֹ���" << endl;
            } else if (A < B) {
                cout << "���ֹ�С" << endl;
            } else {
                cout << "��ʤ����" << endl;
            }
        }
}









