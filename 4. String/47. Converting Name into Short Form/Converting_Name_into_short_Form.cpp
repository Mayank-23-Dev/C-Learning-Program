#include <iostream>
using namespace std;
int main()
{
    int i,n=10,j=1,length=0;
    string s1;
    char y[n];
    cout<<"Enter the Name of a Person-: ";
    getline(cin,s1);
    y[0]=s1[0];
    y[1]='.';
    j=2;
    for ( i = 0; s1[i]!='\0' ; i++)
    {   
        if (s1[i]==' ')
        {
            y[j]=s1[i+1];
            j++;
            y[j]='.';    
            j++;
        }
    }
    for ( i = 0; y[i]!=0; i++)
    {
        length++;
    }
    for ( i = 0; i <length-2; i++)
    {
        cout<<y[i];
    }
    
}