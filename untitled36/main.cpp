#include <iostream>
using namespace std ;
#include<string>
#include<ctime>

class  Person
{
public:
    int age ;
    Person(){
        cout<<"�޲ι��캯���ڴ�"<<endl;
    }

   // Person (int a){
   //     age=a;
    //    cout<<"�вι��캯���ڴ�"<<endl;
  //  }
    ~Person(){
        cout<<"���������ڴ�"<<endl;
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
