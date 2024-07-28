#include <iostream>
using   namespace std ;
      struct Node{
          string col;
          int cnt ,id;
       bool operator<(const Node &u)const
       {
          return id<u.id;
       }

      };


int main() {
      Node no1;
      no1.col="red";
      no1.cnt=1;
      no1.id=1;
      Node no2;
      no2.col="blue";
      no2.cnt=2;
      no2.id=2;
      if(no1<no2){
          cout<<"red<blue"<<endl;
      }


}
