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
        cout << "Person��Ĭ�Ϻ�������" << endl;
    }

    Person(int age,int Height)
          //��ָ�봴��һ���ڴ�ռ�ָ��height������

        {
             myage=age;
           my_height = new int(Height);
            cout<<"Person���вι��캯������"<<endl;
        }
        ~Person()
        {
           if(my_height !=NULL)
           {
               delete my_height;
           }
            cout<<"Person���������캯������"<<endl;
        }
        //�����д�����������������Զ�дһ������������������ǳ��������Ҫ�Լ�д
        Person(const Person &p)
        {
        cout<<"Person���������ĵ���"<<endl;
             myage=p.myage;
             //m_height=p.m_height; ������Ĭ��ʵ�ֵĴ���
             //�������
             my_height=new int (*p.my_height);
        }

};

 void test01()
  {
     Person P1(18,160);
     cout<<"p1�������"<<P1.myage<< "���Ϊ"<<*P1.my_height<<endl;

     Person P2(P1);
      cout<<"p2�������"<<*P2.my_height<<endl;
     //ǳ������������������ظ��ͷ�
 }

int main() {
     test01();
     
}
