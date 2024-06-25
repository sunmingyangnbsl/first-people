#include <iostream>
using namespace std ;
#include<string>
#include<ctime>

class  Person
{
public:
    Person(int age )
    {
        this->age=age;
    }
    int age;
    Person  PersonAddAge(Person p)
    {
        this->age+=p.age;
        return *this;
    }
};

int main() {
    Person p1(10);
    Person p2(10);
    cout<<p2.age<<endl;
    p2.PersonAddAge(p1);
    cout<<p2.age<<endl;
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
    cout<<p2.age<<endl;
    p2=p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
    cout<<p2.age<<endl;

}
