#include <iostream>
using namespace std;
class Ar
{
    public:
    int x, y, z;
    float m;
    Ar(int a)
    {
        x=a;
        cout<<"Area of Given square will be-: "<<x*x<<endl;
    }
    Ar(int a, int b)
    {
        x=a;
        y=b;
        cout<<"Area of Given Rectangle will be-: "<<x*y<<endl;
    }
    Ar(int a, int b, int c)
    {
        x=a;
        y=b;
        z=c;
        cout<<"Area of Given cubiod will be-: "<<x*y*z<<endl;
    }
    Ar(int a, float b)
    {
        x=a;
        m=b;
        cout<<"Area of Given cone will be-: "<<(3.14*x)*(m+x)<<endl;
    }
    Ar(float a, int b)
    {
        m=a;
        x=b;
        cout<<"Area of Given Cylinder will be-: "<<(2*3.14*a)*(a+b)<<endl;
    }
};
int main()
{
    Ar obj1(5);
    Ar obj2(3,6);
    Ar obj3(4,3,2);
    Ar obj4(3,2.6F);
    Ar obj5(5.8F,2);
}