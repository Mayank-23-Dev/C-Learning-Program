#include <iostream>
using namespace std;
int main()
{
    int *pi=new int (5);
    float *pf=new float (4.5);
    char *pc=new char('A');
    *pi=5;
    *pf=4.5;
    *pc='A';
    cout<<pi<<endl;
    cout<<*pi<<endl;
    delete pi;
    cout<<pf<<endl;
    cout<<*pf<<endl;
    delete pf;
    cout<<pc<<endl;
    cout<<*pc<<endl;
    delete pc;
    cout<<pi<<endl;
    cout<<*pi<<endl;
    cout<<pf<<endl;
    cout<<*pf<<endl;
    cout<<pc<<endl;
    cout<<*pc<<endl;
}