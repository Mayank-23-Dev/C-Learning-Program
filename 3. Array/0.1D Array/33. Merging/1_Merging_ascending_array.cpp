#include <iostream>
using namespace std;

int main() 
{
    int n,n1,i,j,k;
    cout<<"Enter the size of First Array-:";
    cin>>n;
    int ar[n]={};
    for (int i = 0; i < n; i++) 
    {
        cout << "Enter the Number for First Array (in Ascending Form)-:";
        cin >> ar[i];
    }
    cout<<"Enter the size of Second Array-:";
    cin>>n1;
    int ar1[n1];
    for (int j = 0; j < n1; j++) 
    {
        cout << "Enter the Number for Second Array (in Ascending Form)-:";
        cin>>ar1[j];
    }
    int m=n+n1;
    int arm[m]={};
    i=0;
    j=0;
    k=0;
    while(i<n && j<n1)
    {
        if (ar[i]>ar1[j])
        {
            arm[k++]=ar1[j++];
        }
        else
        {
            arm[k++]=ar[i++];
        }
    }
    while (i<n)
    {
        arm[k++]=ar[i++];
    }
    while (j<n1)
    {
        arm[k++]=ar1[j++];
    }
    for (i = 0; i<n; i++)
    {
        cout<<ar[i]<<" ";
    }
    cout<<endl;
    for (j = 0; j<n1; j++)
    {
        cout<<ar1[j]<<" ";
    }
    cout<<endl;
    cout<<"Merged Array-:";
    for (k = 0; k<m; k++)
    {
        cout<<arm[k]<<" ";
    }
    
}