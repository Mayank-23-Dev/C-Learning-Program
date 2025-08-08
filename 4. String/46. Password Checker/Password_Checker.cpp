#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int i,n=100,check=0,len=0;
    int c1=0,c2=0,c3=0,c4=0;
    char s1[n];
    char y;
    cout<<"Enter Password-: ";
    cin.getline(s1,n);
    cout<<"\n";
    len=strlen(s1);
    if (len>=8 && len<=12)
    {
        for ( i = 0; i <= len-1; i++)
        {
            y=s1[i];
            if (y>='A' && y<='Z')
            {
                c1++;
            }
            else if (y>='a' && y<='z')
            {
                c2++;
            }
            else if ((y>='!' && y<='/' )|| y=='@')
            {
                c3++;
            }
            else if (y>='0' && y<='9' )
            {
                c4++;
            }
            else
            {
                check=1;
            }
        }
    }
    else
    {
        cout<<s1<<" is Shorter in Length and We want Minimum 8 Character.";
    }
    if (len>=8 && len<=12)
    {
        if (check==1)
        {
            cout<<s1<<" is not a Strong  & Valid Password.";
        }
        else if (check==0)
        {
            if (c1>=1 && c2>=2 && c3>=1 && c4>=1)
            {
            cout<<s1<<" is a Strong  & Valid Password.";
            }
            else
            {
            cout<<s1<<" is not a Strong  & Valid Password.";            
            }
        }
    }
}