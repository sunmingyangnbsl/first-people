#include <iostream>
using namespace std ;
#include<string>
#include<ctime>

class calculator{
public:int m_Num1;
       int m_Num2;
       int getResult(string oper)
       {
           if(oper=="+"){
               return m_Num1+m_Num2;
           }
         else if (oper=="-"){
             return m_Num1-m_Num2;
         }
         else if  (oper=="*"){
             return m_Num1*m_Num2;
             }
         else return 1;
       }

};
 void test01(){
     string oper;

     calculator cal;
     cout<<"�������һ����"<<endl;
     cin>>cal.m_Num1;
     cout<<"���������"<<endl;
     cin>>oper;
     cout<<"������ڶ�����"<<endl;
     cin>>cal.m_Num2;
     cout<<"�����"<<cal.getResult(oper)<<endl;
 }

int main() {

   test01();


    return 0;
}
