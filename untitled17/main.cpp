#include <iostream>
using namespace std ;
#include<string>
#include<ctime>
class Person
{
public:
    int myage;
    int *my_height ;
    Person()

    {
        cout << "Person的默认函数调用" << endl;
    }

    Person(int age,int Height)
          //给指针创建一个内存空间指向height的数据

        {
             myage=age;
           my_height = new int(Height);
            cout<<"Person的有参构造函数调用"<<endl;
        }
        ~Person()
        {
           if(my_height !=NULL)
           {
               delete my_height;
           }
            cout<<"Person的析构构造函数调用"<<endl;
        }
        //如果不写拷贝函数编译器会自动写一个拷贝函数，但是是浅拷贝，需要自己写
        Person(const Person &p)
        {
        cout<<"Person拷贝函数的调用"<<endl;
             myage=p.myage;
             //m_height=p.m_height; 编译器默认实现的代码
             //深拷贝代码
             my_height=new int (*p.my_height);
        }

};

 void test01()
  {
     Person P1(18,160);
     cout<<"p1的身高是"<<P1.myage<< "身高为"<<*P1.my_height<<endl;

     Person P2(P1);
      cout<<"p2的身高是"<<*P2.my_height<<endl;
     //浅拷贝带来的问题堆区重复释放
 }

int main() {
     test01();
     
}
