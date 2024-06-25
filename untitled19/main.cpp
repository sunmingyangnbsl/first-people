
#include <iostream>
using namespace std ;
#include <string>
#include<ctime>

class Person{
public:
     int number;
     void func(){
         number=10;
     }
     //Á´Ê½±à³Ì
     Person& Personage(Person &p){
        this->number+=number;
        return *this;
    }
};

int main() {
    Person p1;
    p1.func();
    p1.Personage(p1).Personage(p1);
    cout<<p1.number<<endl;
}
