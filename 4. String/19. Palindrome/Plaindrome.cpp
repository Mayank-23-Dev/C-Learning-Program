#include <iostream>
using namespace std;
int main()
{
    int i, n=100,len=0,check=0;
    char s1[n],y,x;
    cout<<"Original String-:";
    cin.getline(s1,n);
    for (int i = 0; s1[i]!=0; i++)
    {
        len++;
    }
    for ( i = 0; i < len; i++)
    {
        y=s1[i];
        if (y>='a' && y<='z')
        {
            y=y-32;
            s1[i]=y;
        }
    }
    for ( i = 0; i < len/2; i++)
    {
        y=s1[i];
        x=s1[len-i-1];
        if (y!=x)
        {
            check=1;
            break;    
        }
    }
    if (check==1)
    {
        cout<<s1<<" is not a Palindrome.";
    }
    else
    {
        cout<<s1<<" is a Palindrome.";
    }
}