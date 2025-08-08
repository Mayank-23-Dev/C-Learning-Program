#include <iostream>
using namespace std;
int main()
{
    int i,len=0,n=100,count=0,j,len2=0;
    char s1[n];
    char y;
    char s2[n];
    cout<<"Enter  String-:";
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
        if (y>='0' && y<='9')
        {
            s2[count]=y;
            count++;
        }
    }
    s2[count]='\0';
cout<<"Extracted Digit-:\n";
cout<<s2<<"\n";
}