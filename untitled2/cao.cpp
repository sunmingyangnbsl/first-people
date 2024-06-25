#include <iostream>
using namespace std ;
int cao() {
    int A;
    int B;
    B = rand()%30; // 随机函数限制范围

    cout << B << endl;

    cout << "请输入一个数字" << endl;
    cin >> A;
    if (A > B) {
        cout << "数字过大" << endl;
    } else if (A < B) {
        cout << "数字过小" << endl;
    } else
    {
        cout << "你胜利了"<<endl;
    }
}









