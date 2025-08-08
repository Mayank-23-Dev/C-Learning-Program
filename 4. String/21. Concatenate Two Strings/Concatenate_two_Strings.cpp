#include <iostream>
using namespace std;
int main()
{
    int i,j;
    string s1;
    string s2;
    cout<<"Enter First String-:";
    getline(cin, s1);
    cout<<"Enter Second String-:";
    getline(cin, s2);
    s1=s1+s2;
    cout<<"Concatenated String-:"<<s1;
}