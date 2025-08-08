#include <iostream>
using namespace std;
struct stu_record
{
    int stu_roll;
    char stu_name[20];
    int stu_age;
    int stu_percentage;
};
typedef stu_record rec;
main()
{
    int i,n;
    cout<<"How many Student entries are there-:";
    cin>>n;
    rec s[n];
    char ignore[2];
    cout<<"\n";
    for ( i = 0; i < n ; i++)
    {
        cout<<"                             "<<"Enter the Details of Student No "<<i+1<<"\n";
        cout<<"Enter ID of Student-:";
        cin>>s[i].stu_roll;
        cout<<endl;
        cin.getline(ignore,1);
        cout<<"Enter Name of Student-:";
        cin.getline(s[i].stu_name,20);
        cout<<endl;
        cout<<"Enter Age of Student-:";
        cin>>s[i].stu_age;
        cout<<endl;
        cout<<"Enter Percentage of Student-:";
        cin>>s[i].stu_percentage;
        cout<<endl;
        cout<<"\n";
    }
    cout<<"\n                             "<<"Displaying the Details of Student\n";
    for ( i = 0; i < n; i++)
    {
        cout<<"Enter ID of Student-:";
        cout<<s[i].stu_roll;
        cout<<endl;
        cout<<"Enter Name of Student-:";
        cout<<s[i].stu_name;
        cout<<endl;
        cout<<"Enter Age of Student-:";
        cout<<s[i].stu_age;
        cout<<endl;
        cout<<"Enter Percentage of Student-:";
        cout<<s[i].stu_percentage;
        cout<<endl;
        cout<<"\n";
    }
}