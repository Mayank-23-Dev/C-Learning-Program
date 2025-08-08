#include <iostream>
using namespace std;
int main()
{
    int a=10;
    float b=5.4;
    char c='A';
    void* ptr=NULL;
    ptr=&a;
    cout<<ptr<<endl;
    int* p1=(int*)ptr;
    cout<<*p1<<endl;
    ptr=&b;
    float *p2=(float*)ptr;
    cout<<ptr<<endl;
    cout<<*p2<<endl;
    ptr=&c;
    char *p3=(char*)ptr;
    cout<<ptr<<endl;
    cout<<*p3<<endl;
}