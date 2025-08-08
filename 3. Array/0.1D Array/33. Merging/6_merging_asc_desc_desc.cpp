#include <iostream>
using namespace std;

int main() 
{
    int n,n1,i=0,j=0,k=0;
    cout<<"Enter the size of First Array-:";
    cin>>n;
    int ar[n]={};
    for (i = 0; i < n; i++) 
    {
        cout << "Enter the Number for First Array (in ascending Form)-:";
        cin >> ar[i];
    }
    cout<<"Enter the size of Second Array-:";
    cin>>n1;
    int ar1[n1]={};
    for (j = 0; j < n1; j++) 
    {
        cout << "Enter the Number for Second Array (in Descending Form)-:";
        cin>>ar1[j];
    }
    int m=n+n1;
    int arm[m]={};
    i=n-1;
    j=0;
    while(i>=0 && j<n1 )
    {
        if (ar[i]<ar1[j])
        {
            arm[k++]=ar1[j++];
        }
        else
        {
            arm[k++]=ar[i--];
        }
    }
    while (i>=0)
    {
        arm[k++]=ar[i--];
    }
    while (j<n1)
    {
        arm[k++]=ar1[j++];
    }
    cout<<"Merged Array-:";
    for (k = 0; k<m; k++)
    {
        cout<<arm[k]<<" ";
    }
    
}