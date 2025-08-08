#include <iostream>
using namespace std;
int main()
{
    int i,len=0,n=100,count=0;
    char s1[n];
    char y;
    cout<<"Enter  String-:";
    cin.getline(s1,n);
    cout<<"Original String-:\n";
    cout<<s1<<"\n";
    for ( i = 0; s1[i]!='\0'; i++)
    {
        y=s1[i];
        if (y>='A' && y<='Z')
        {
            y=y+32;
            s1[i]=y;
        }
        else if (y>='a' && y<='z')
        {
            y=y-32;
            s1[i]=y;
        }
    }
cout<<"Converted String-:\n";
cout<<s1<<"\n";
}