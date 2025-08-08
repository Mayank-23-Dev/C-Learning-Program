#include <iostream>
using namespace std;
int main()
{
    int i,len=0,n=100;
    char y;
    char s1[n];
    char s2[n];
    char x='\0';
    cout<<"Enter First String-:";
    cin.getline(s1,n);
    cout<<"Original String-:";
    cout<<s1<<"\n";
    for (i=0;s1[i]!='\0'; i++)
    {
        len++;
    }
    for ( i = 0; i < len; i++)
    {
        y=s1[i];
        s2[i]=y;
    }
    s2[len]=x;
    cout<<"Second String-:";
    cout<<s2;
}