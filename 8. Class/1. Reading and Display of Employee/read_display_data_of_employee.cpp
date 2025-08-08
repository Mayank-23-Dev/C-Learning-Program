#include <iostream>
using namespace std;
class e_record
{
    public:
    int emp_id;
    char emp_name[20];
    int emp_salary;
};
typedef e_record rec;
main()
{
    int i,n;
    cout<<"How many Employee entries are there-:";
    cin>>n;
    rec e[n];
    char ignore[2];
    cout<<"\n";
    for ( i = 0; i < n ; i++)
    {
        cout<<"                             "<<"Enter the Details of Employee No "<<i+1<<"\n";
        cout<<"Enter ID of Employee-:";
        cin>>e[i].emp_id;
        cout<<endl;
        cin.getline(ignore,1);
        cout<<"Enter Name of Employee-:";
        cin.getline(e[i].emp_name,20);
        cout<<endl;
        cout<<"Enter Salary of Employee-:";
        cin>>e[i].emp_salary;
        cout<<endl;
        cout<<"\n";
    }
    cout<<"\n                             "<<"Displaying the Details of Employee\n";
    for ( i = 0; i < n; i++)
    {
        cout<<"Enter ID of Employee-:";
        cout<<e[i].emp_id;
        cout<<endl;
        cout<<"Enter Name of Employee-:";
        cout<<e[i].emp_name;
        cout<<endl;
        cout<<"Enter Salary of Employee-:";
        cout<<e[i].emp_salary;
        cout<<endl;
        cout<<"\n";
    }
}