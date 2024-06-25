#include <iostream>
using namespace std ;
#include <string>
#include<ctime>

class student {
public:

    void show(int a) {


        cout << a << endl;
    }

    void setName(string name)
    {
          m_name=name;
    }
    string love()
    {
        return  m_name;
    }

private:

    int a;
    string m_name;
    int b;
};



int main() {
    student S1;
    int f;
    f=10;
    string AI;
    S1.show(f);
  S1.setName("Ëï");
     AI= S1.love();
     cout<<AI<<endl;
}
