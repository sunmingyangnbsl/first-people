#include <iostream>
using namespace std ;
#include<string>
#include<ctime>
class Animal
        {
public: virtual  void test01(){
    cout<<"������˵��"<<endl;
}


};

class Cat:public Animal {
public:void test01(){
    cout<<"Сè��˵��"<<endl;
}
};
void speak(Animal &Animal){
        Animal.test01();
}
void test(){
    Cat cat;
    Animal &animal=cat;

    animal.test01();

    //speak(cat);

}


int main() {

    test();

    return 0;
}
