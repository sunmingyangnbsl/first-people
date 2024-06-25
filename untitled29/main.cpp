
#include <iostream>
using namespace std ;
#include <string>
#include<ctime>
#include<vector>
class Base
{
public:
     virtual void func()=0;
     //纯虚函数无法实例化
     //抽象类的子类必须重新父类中的纯虚函数
};
int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}
