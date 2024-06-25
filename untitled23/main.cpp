#include <iostream>
using namespace std ;
#include <string>
#include<ctime>
class Person {
public:
    int m_a = 10;
    int m_b = 20;

    Person PersonaddPerson(Person &p) {
        Person temp;
        temp.m_a = this->m_a + p.m_a;
        return temp;
    }
};
 int main() {
    Person P1;
  P1.PersonaddPerson(P1);

    return 0;
}
