#include <iostream>
using namespace std;
int main()
{
    int i,len=0,n=100,word=1;
    char y;
    char s1[n];
    char x='\0';
    cout<<"Enter String-:";
    cin.getline(s1,n);
    cout<<"Original String-:";
    cout<<s1<<"\n";
    for (i=0;s1[i]!='\0'; i++)
    {
        len++;
    }
    for (i=0;i<len; i++)
    {
        if (s1[i]==' ')
        {
            word++;
        }
    }
    cout<<"Total Number of Words String Contains-:"<<word;
}