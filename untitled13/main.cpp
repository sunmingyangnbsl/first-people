#include <iostream>
using namespace std ;
#include<string>
#include<ctime>




class Cube
{
public:
    //设置长
    void setL(int l)
    {
        m_l=l;
    }

    //获取长
    int getL()
    {
        return m_l;
    }

    void setW(int W)
    {
        m_W=W;
    }

    int getW()
    {
        return m_W;
    }

    void setH(int H)
    {
        m_H=H;
    }
    int getH()
    {
        return m_H;
    }

    int calculateS()
    {
        return 2*m_l*m_W+2*m_W*m_H+2*m_l*m_H;
    }
    int  calculateV()
    {
        return m_l*m_W*m_H ;
    }

    //利用成员函数来判断

    bool isSamebyclass(Cube c)
    {
        if(m_l==c.getL()&&m_W==c.getW()&&m_H==c.getH())
        {
            return true;

        }
        else{
            return false;
        }
    }





private:
    int m_l;
    int m_H;
    int m_W;

};

bool isSame(Cube *c1,Cube *c2)
{
if(c1->getL()==c2->getL()&&c1->getW()==c2->getW()&&c1->getH()==c2->getH())
{
return true;
}

else

    {

        return false;
    }

}



int main() {

    Cube c1;

    c1.setL(10);
    c1.setW(10);
    c1.setH(10);

    cout << "c1的面积为" << c1.calculateS() << endl;
    cout << "c1的面积为" << c1.calculateV() << endl;

    Cube c2;
    c2.setL(10);
    c2.setW(10);
    c2.setH(10);

    bool ret = isSame(&c1, &c2);

    if (ret) {
        cout << "c1和c2是相等的" << endl;
    } else {
        cout << "c1和c2是bu相等的<<endl";
    }

    ret = c1.isSamebyclass(c2);
    if (ret) {
        cout << "c1和c2是相等的" << endl;
    } else {
        cout << "c1和c2是bu相等的<<endl";
    }

}
    //利用全局函数判断


