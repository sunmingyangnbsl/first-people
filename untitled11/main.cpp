#include <iostream>
using namespace std ;
#include <string>
#include<ctime>



class Student
{  //访问权限

public:
    //类中的属性和行为 我们统一成为 成员
    //属性 成员属性 成员变量
    //
   string sname;
   string snumber;


};

int main() {
  Student S1;
  string name ;
  string number;
    cout<<"请输入学生的姓名："<<endl;
  cin>>name;
    cout<<"请输入学生的学号："<<endl;
  cin>>number;
  S1.sname=name;
  S1.snumber=number;
  cout<<"学生的姓名是："<<S1.sname<<endl;
  cout<<"学生的学号是："<<S1.snumber<<endl;
}
