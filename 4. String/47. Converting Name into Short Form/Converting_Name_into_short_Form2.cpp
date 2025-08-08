#include <iostream>
using namespace std;
int main()
{;
    string s1;
    cout<<"Enter the Name of a Person-: ";
    getline(cin,s1);
    cout<<s1[0];
    for ( int i = 0; i<s1.length() ; i++)
    {   
        if (s1[i]==' ')
        {
            cout<<"."<<s1[i+1];
        }
    }
}