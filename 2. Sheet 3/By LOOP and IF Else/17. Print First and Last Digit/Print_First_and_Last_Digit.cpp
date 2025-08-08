#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a Number-:";
    cin>>n;
    int r=n%10;
    cout<<"The Last Term of the Number-:"<<r<<endl;
    int q=n;
    while(q>=10)
    {
        q=q/10;
    }
    cout<<"The First Term of the Number-:"<<q;
}