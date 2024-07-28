#include <iostream>
using namespace std ;
#include <vector>
#include <map>


int main() {
      vector<string> vec={"ËïÃûÑï","Ğì°Ù³É","ÕÔÂº"} ;
      for( auto& num : vec){
          cout<<num<<endl;
//          cout<<"\n" <<endl;
      }
      map<int,string> my_map;
      my_map={{1,"sun"},
              {2,"wang"},
              {3,"yang"}};
      for(auto pant:my_map){
          cout<<pant.first <<' '<< pant.second<<endl;
      }

    return 0;
}
