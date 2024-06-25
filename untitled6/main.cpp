#include <iostream>
using namespace std ;

int main() {
    int b;
    for(int i=1;i<10;i++){
      for(int a=i;a<10;a++) {
           b=a*i;
          cout<<b<<"="<<i<<"*"<<a<<"\t";
      }
      cout<<endl;
      }
}
