#include <iostream>
using namespace std ;
#include <string>
#include<ctime>
class  Building{
    friend  class Goodgay;
public:
    string  sname;
    string  wname;
    Building();
private:
    string  hname;
};

class Goodgay{

public:
   Building *building;
    //building=new Building;
    Building build;
//    building = &build;
    Goodgay();
    void visit();
};




Building::Building() {
    sname = "smy";
    wname = "wsy";
}

Goodgay::Goodgay(){
   //building=new Building;
   Building build;
   building=&build;
    //cout<<building->sname<<endl;
}
void Goodgay::visit(){
   cout<<building->sname<<endl;
    //cout<<building->hname<<endl;
}
void test01(){
    Goodgay gg;
    gg.visit();
}
int main() {
    test01();
}
