#include <iostream>
using namespace std ;
int main() {
  for (int i=1;i<101;i++){
      if(i%10==7){
          cout<<"������"<<endl;
      }
  else if ((i/10)%10==7){
          cout<<"������"<<endl;
      }
  else if(i%7==0){
      cout<<"������"<<endl;
    }
  else {
      cout<<i<<endl;
  }

  }
}
