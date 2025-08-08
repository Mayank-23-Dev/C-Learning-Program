#include <iostream>
using namespace std;
int main()
{
    int i,length=0,n=100,temp;
    char s1[n];
    cout<<"Enter the String-:";
    cin.getline(s1,n);
    cout<<"Original String-:";
    cout<<s1<<"\n";
    for (i=0;s1[i]!='\0'; i++)
    {
        length++; 
    }
    for ( i = 0; i < length/2; i++)
    {
        temp=s1[i];
        s1[i]=s1[length-1-i];
        s1[length-1-i]=temp;
    }
    
    cout<<"Reversed String-:";
    cout<<s1;
}