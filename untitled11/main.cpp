#include <iostream>
using namespace std ;
#include <string>
#include<ctime>



class Student
{  //����Ȩ��

public:
    //���е����Ժ���Ϊ ����ͳһ��Ϊ ��Ա
    //���� ��Ա���� ��Ա����
    //
   string sname;
   string snumber;


};

int main() {
  Student S1;
  string name ;
  string number;
    cout<<"������ѧ����������"<<endl;
  cin>>name;
    cout<<"������ѧ����ѧ�ţ�"<<endl;
  cin>>number;
  S1.sname=name;
  S1.snumber=number;
  cout<<"ѧ���������ǣ�"<<S1.sname<<endl;
  cout<<"ѧ����ѧ���ǣ�"<<S1.snumber<<endl;
}
