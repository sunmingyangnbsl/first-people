#include <iostream>
using namespace std;

class  Person
{
    int age;
public:

    Person(){
        cout<<"无参构造函数在此"<<endl;
    }

    Person (int a){
        age=a;
        cout<<"有参构造函数在此"<<endl;
    }
    ~Person(){
        cout<<"析构函数在此"<<endl;
    }
    Person(const Person &p){
        age=p.age;
        cout<<age<<endl;
    }


};
void test01()
{   Person p2(10);
    Person p3(p2);
}

 Person test02(){
    Person p1;
    return p1;
}

 void test03(){
    Person p4(test02());

}

int main() {

}
