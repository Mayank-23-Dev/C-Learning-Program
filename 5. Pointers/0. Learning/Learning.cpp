#include <iostream>
using namespace std;
int main()
{
    int a=5;
    float b=5.6;
    char ch='A';
    int *p1=&a;
    float *p2=&b;
    char *p3=&ch;
    cout<<"Hexadecimal-:"<<p1<<endl;
    printf("%d\n",p1);
    cout<<"Hexadecimal-:"<<p2<<endl;
    printf("%d\n",p2);
    cout<<"Hexadecimal-:"<<p3<<endl;
    printf("%d\n",p3);
    p1++;
    p2++;
    p3++;
    cout<<"Changed"<<endl;
    printf("%d\n",p1);
    printf("%d\n",p2);
    printf("%d\n",p3);
} 