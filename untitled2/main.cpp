#include <iostream>
using namespace std ;
int main() {
    int A = 0;
    int B;
    B = rand()%90; // 随机函数限制范围

    while(A != B) {
        cout << "请输入一个数字" << endl;
        cin >> A;
            if (A > B) {
                cout << "数字过大" << endl;
            } else if (A < B) {
                cout << "数字过小" << endl;
            } else {
                cout << "你胜利了" << endl;
            }
        }
}









