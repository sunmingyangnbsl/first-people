#include <iostream>
using namespace std ;
#include <string>
#include<ctime>
class AbstractCalculator
{
  public:
      virtual   int getResult()
      {
          return 0;
      }
      int m_Num1;
      int m_Num2;
};
//�ӷ�������
class AddCalculator:public AbstractCalculator
{
public:
     int getResult(){
         return m_Num1+m_Num2;
     }
};
class SubCalculator:public AbstractCalculator
{
public:
    int getResult(){
        return m_Num1-m_Num2;
    }
};
void test02(AbstractCalculator &AbstractCalculator){
  //  SubCalculator Add;
  //  AbstractCalculator *abc;
  //  //�����ָ�������ִ������Ķ���
  //   abc=&Add;
  //  abc->m_Num1=10;
   // abc->m_Num2=10;
    // cout<<abc->getResult()<<endl;
    cout<<AbstractCalculator.getResult()<<endl;


}
void test01()
{
    AddCalculator  add;
    add.m_Num1=10;
    add.m_Num2=10;

    test02(add);

}

int main() {
    test01();
    return 0;
}
