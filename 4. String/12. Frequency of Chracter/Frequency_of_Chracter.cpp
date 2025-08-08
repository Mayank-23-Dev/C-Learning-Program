#include <iostream>
using namespace std;
int main()
{
    int i,n=100,count=0;
    char s1[n];
    char x;
    cout<<"Enter  String-:";
    cin.getline(s1,n);
    cout<<"Original String-:\n";
    cout<<s1<<"\n";
    cout<<"Enter the Character whose Frequency you want to check-:";
    cin>>x;
    for ( i = 0; s1[i]!='\0'; i++)
    {
        if (s1[i]==x)
        {
            count++;
        }
    }
    if (count==0)
    {
        cout<<"Chracter Not Found....";
    }
    else if (count!=0)
    {
        cout<<"'"<<x<<"' : "<<count<<endl;    
    }
}