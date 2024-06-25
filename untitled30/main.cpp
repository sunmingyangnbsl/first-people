#include <iostream>
using namespace std ;
#include <string>
#include<ctime>
#include<vector>
//左移运算符


class AbstractDrinking{
public:
    //煮水
    virtual void Boil()=0;
    //倒入杯中
    virtual void Brew()=0;

};
int main() {
     vector<int> my_vector;

    cout << "Hello, World!" << std::endl;
    return 0;
}
