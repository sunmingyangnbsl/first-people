#include <iostream>
using namespace std;

class people{
private:

    string name;
public:
    int age;
    void eat(){
        cout<< "eat people"<<endl;
    }
};
int main() {
    people p;
    int b = 3;
    int *c = &b;
    int **d = &c;

    p.age = **d;

    std::cout << **d << std::endl;
    return 0;
}








