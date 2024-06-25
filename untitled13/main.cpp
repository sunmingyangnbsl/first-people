#include <iostream>
using namespace std ;
#include<string>
#include<ctime>




class Cube
{
public:
    //���ó�
    void setL(int l)
    {
        m_l=l;
    }

    //��ȡ��
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

    //���ó�Ա�������ж�

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

    cout << "c1�����Ϊ" << c1.calculateS() << endl;
    cout << "c1�����Ϊ" << c1.calculateV() << endl;

    Cube c2;
    c2.setL(10);
    c2.setW(10);
    c2.setH(10);

    bool ret = isSame(&c1, &c2);

    if (ret) {
        cout << "c1��c2����ȵ�" << endl;
    } else {
        cout << "c1��c2��bu��ȵ�<<endl";
    }

    ret = c1.isSamebyclass(c2);
    if (ret) {
        cout << "c1��c2����ȵ�" << endl;
    } else {
        cout << "c1��c2��bu��ȵ�<<endl";
    }

}
    //����ȫ�ֺ����ж�


