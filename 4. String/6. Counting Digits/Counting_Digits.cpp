#include <iostream>
using namespace std;
int main()
{
    int i,len=0,n=100,count=0;
    char s1[n];
    char y;
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
            count++;
        }
    }
    cout<<"Total Number of Count String Contains "<<count;
}