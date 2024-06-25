#include <iostream>
using namespace std ;
#include<string>
#include<ctime>
class Animal
        {
public: virtual  void test01(){
    cout<<"动物在说话"<<endl;
}


};

class Cat:public Animal {
public:void test01(){
    cout<<"小猫在说话"<<endl;
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
