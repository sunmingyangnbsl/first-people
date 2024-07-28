#include <iostream>
using namespace std;
#include "C.h"
int main() {
    C *c=new D(5);
    C *c1=new E(6,7);
    cout<<c->area()<<endl;
    cout<<c1->area()<<endl;
    return 0;
}
