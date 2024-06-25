#include <iostream>
using namespace std ;
#include <string>
#include<ctime>
class Person
{
public:

   Person(int age){
      this->age=age;

  }
int age;

 Person &  PersonAddage(Person &p)
   {
       this->age+=p.age;
       //this 是指向P2的指针，而*this指向的是P2这个对象
       return *this;
   }
};

void test01()
{
   Person p1(10);
   cout<<p1.age<<endl;
   Person p2(10);
   p2.PersonAddage(p1).PersonAddage(p1);
   cout<<p2.age<<endl;

};

int main() {

    test01();

    system("pause");

}