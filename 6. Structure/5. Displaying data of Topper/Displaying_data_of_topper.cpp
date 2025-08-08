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
    int i,n,top=0;
    cout<<"How many Student entries are there-:";
    cin>>n;
    rec s[n];
    char ignore[2];
    cout<<"\n";
    for (i = 0; i < n; i++)
    {
        cout<<"                             " << "Enter the Details of Student No " << i + 1 << "\n";
        cout<<"Enter ID of Student-:";
        cin>>s[i].stu_roll;
        cout<<endl;
        cin.getline(ignore, 1);
        cout<<"Enter Name of Student-:";
        cin.getline(s[i].stu_name, 20);
        cout<<endl;
        cout<<"Enter Age of Student-:";
        cin>>s[i].stu_age;
        cout<<endl;
        cout<<"Enter Percentage of Student-:";
        cin>>s[i].stu_percentage;
        cout<<endl;
        cout<<"\n";
    }
    for (i=0;i<n-1;i++)
    {
        if (s[i+1].stu_percentage>s[i].stu_percentage)
        {
            top=i+1;
        }
    }
    cout << "\n                             " << "Displaying the Details of Topper \n";
    cout<<"Enter ID of Student-:";
    cout<<s[top].stu_roll;
    cout<<endl;
    cout<<"Enter Name of Student-:";
    cout<<s[top].stu_name;
    cout<<endl;
    cout<<"Enter Age of Student-:";
    cout<<s[top].stu_age;
    cout<<endl;
    cout<<"Enter Percentage of Student-:";
    cout<<s[top].stu_percentage;
    cout<<endl;
    cout<<"\n";
    
}