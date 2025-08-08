#include <iostream>
using namespace std;
int main()
{
    int i,length=0,n=100;
    char s1[n];
    cout<<"Enter the String-:";
    cin.getline(s1,n);
    cout<<s1<<"\n";
    for (i=0;s1[i]!='\0'; i++)
    {
        length++;
    }
    cout<<"The Size of String is "<<length;
}