
#ifndef UNTITLED39_C_H
#define UNTITLED39_C_H
# include <iostream>
using namespace std;

class C {
public:
    virtual int area()
    {
        return 0;
    }

};

class D :public C {
private:
     int radius;
public:
   D(int r):radius(r){}
   int area() override
   {
       return 3*radius*radius;
   }
};

class E :public C {
private:
       int tangle;
       int width ;
public:
    E(int t,int w):tangle(t),width(w){}
    int area() override
    {
        return tangle*width ;
    }
};


#endif //UNTITLED39_C_H
