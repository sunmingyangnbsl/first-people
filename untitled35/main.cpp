#include <iostream>
using namespace std ;
#include <string>
#include<ctime>
#include<map>
int main(){
  map<string, int > mymap={{"apple",5},{"bananna",6},{"orange",7}};

    for (auto&pair:mymap){
        cout<<pair.first<<pair.second<<endl;
    }



}
