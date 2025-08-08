#include <iostream>
using namespace std;
class FO
{
    public:
    void sum(int a, int b)
    {
        cout<<"Sum of Integer & Integer-:"<<a+b<<endl;
    }
    void sum(int a, int b, int c)
    {
        cout<<"Sum of Integer & Integer & Integer-:"<<a+b+c<<endl;
    }
    void sum(int a, float b)
    {
        cout<<"Sum of Integer & Float-:"<<a+b<<endl;
    }
    void sum(float a, int b)
    {
        cout<<"Sum of Integer & Float-:"<<a+b<<endl;
    }
};
int main()
{
    FO obj;
    obj.sum(1,2);
    obj.sum(1,2,3);
    obj.sum(3,2.6F);
    obj.sum(5.8F,2);
}