#include <iostream>
using namespace std ;
#include <string>
#include<ctime>
#include "point.h"


//class circle
//{
//public:
 //   void setp1(int mpoint1)
  //  {
   //     point1=mpoint1;
   // }
   // int getp1 ()
   // {
    //    return point1;

    //}

    //void setp2(int mpoint2)
    //{
     //   point2=mpoint2;
    //}
    //int getp2 ()
    //{
     //   return point2;

    //}

    //void setp3(int mpoint3)
    //{
      //  point3=mpoint3;
    //}
    //int getp3 ()
    //{
      //  return point3;

    //}

    //void setp4(int mpoint4)
    //{
      //  point4=mpoint4;
    //}
    //int getp4 ()
    //{
      //  return point4;

    //}


    //void setmr(int mr)
    //{
      //  r=mr;
    //}
    //int getmr ()
    //{
      //  return r;

    //}






//private: int point1;
  //       int point2;
    //     int point3;
      //   int point4;
        // int  r;

//};

void isSame(circle c1) {
    if ((c1.getp1() - c1.getp3() ) +( c1.getp2() - c1.getp4() ) == c1.getmr()*c1.getmr()) {
        cout << "点在圆上" << endl;
    }
    else if ((c1.getp1() - c1.getp3()) +( c1.getp2() - c1.getp4()) >c1.getmr()*c1.getmr()) {

        cout << "点在圆外" << endl;
    } else if  ((c1.getp1() - c1.getp3()) +( c1.getp2() - c1.getp4()) < c1.getmr()*c1.getmr())
    {
        cout << "点在圆内" << endl;
    }
}


int main() {
    int point1;
    int point2;
    int point3;
    int point4;
    int r;
    cout << "请输入圆点1" << endl;
    cin>>point1;
    cout << "请输入圆点2" << endl;
    cin>>point2;
    cout << "请输入点3" << endl;
    cin>>point3;
    cout << "请输入点4" << endl;
    cin>>point4;
    cout << "请输入半径" << endl;
    cin>>r;
    circle c1;
    c1.setp1(point1);
    c1.setp2(point2);
    c1.setp3(point3);
    c1.setp4(point4);
    c1.setmr(r);
    isSame(c1);


}
