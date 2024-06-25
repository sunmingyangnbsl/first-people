#include <iostream>
using namespace std ;
#include <string>
#include<ctime>

struct hero{
    string hname ;
    string hgender;
    int age;
};

void allocateSpace(struct hero thero[] ,int len)
 {
    string name[]={"Áõ±¸","¹ØÓğ","ÕÅ·É","ÕÔÔÆ","õõ²õ"};
    string hgender[]={"ÄĞ","ÄĞ","ÄĞ","ÄĞ","Å®"};
    int age[]={23,22,20,21,19};

    for(int i=0;i<len;i++)
  {  thero[i].hname=name[i];
      thero[i].hgender=hgender[i];
      thero[i].age=age[i];

 }

};

void printInfo(struct hero thero[],int len) {
    for(int e=0;e<len;e++){
        cout<<thero[e].hname<< thero[e].age<< thero[e].hgender<<"\t";
    }
    cout<<endl;
    for (int i = 0; i < len; i++) {
        for (int j = 0; j < len - i - 1; j++) {
            if (thero[j].age > thero[j + 1].age) {
                int temp0 = thero[j].age;
                thero[j].age = thero[j + 1].age;
                thero[j + 1].age = temp0;
                string temp1=thero[j].hname;
                thero[j].hname = thero[j + 1].hname;
                thero[j + 1].hname = temp1;
                string temp2 = thero[j].hgender;
                thero[j].hgender = thero[j + 1].hgender;
                thero[j + 1].hgender = temp2;
            }
        }
    }
    for(int k=0;k<5;k++){
        cout<<thero[k].hname<< thero[k].age<< thero[k].hgender<<"\t";
    }
    cout<<endl;
}



int main() {
    struct hero thero[5];
    int len;
    len =sizeof(thero)/sizeof(thero[0]);
    allocateSpace(thero, len );
    printInfo(thero,len);

}
