#include <iostream>
using namespace std ;
#include<string>
#include<ctime>

class  Person
{
public:
    int age ;
    Person(){
        cout<<"无参构造函数在此"<<endl;
    }

   // Person (int a){
   //     age=a;
    //    cout<<"有参构造函数在此"<<endl;
  //  }
    ~Person(){
        cout<<"析构函数在此"<<endl;
    }
      Person(const int & n ) : age(n){}
    Person(const Person &p){
        int db;
        age=p.age;
        cout<<age<<endl;
    }



};
void test01()
{
    Person p1;
    Person p2(100);
    cout<<p2.age<<endl;
    Person p3(p2);
}
int main() {


    test01();
    Person *p4  =new Person();
    p4->age=10;
    cout<<p4->age<<endl;

}
