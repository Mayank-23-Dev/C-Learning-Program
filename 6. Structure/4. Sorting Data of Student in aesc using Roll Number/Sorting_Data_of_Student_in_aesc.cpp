#include <iostream>
using namespace std;
struct s_record
{
    int stu_id;
    char stu_name[20];
    int stu_age;
    int stu_percentage;
};
typedef struct s_record stu;
main()
{
    int n,i;
    stu temp;
    cout<<"Enter The value of n-:";
    cin>>n;
    stu s[n];
    for (i = 0; i < n; i++)
    {
        char ignore[2];
        cout<<"Enter ID of Student-:";
        cin>>s[i].stu_id;
        cin.getline(ignore,2);
        cout<<"Enter Name of Student-:";
        cin.getline(s[i].stu_name,20);
        cout<<"Enter Age-:";
        cin>>s[i].stu_age;
        cout<<"Enter Percentage-:";
        cin>>s[i].stu_percentage;   
        cout<<endl<<endl;
    }
    for ( i = 0; i < n; i++)
    {
        if (s[i].stu_id>s[i+1].stu_id)
        {
            temp=s[i+1];
            s[i+1]=s[i];
            s[i]=temp;
        }
    }
    cout<<"                                        "<<"Record of Student"<<endl;
    for (i = 0; i < n; i++)
    {
        cout<<"Student Roll Number-: "<<s[i].stu_id<<endl;
        cout<<"Student Name-:" <<s[i].stu_name<<endl;
        cout<<"Student Age-:" <<s[i].stu_age<<endl;
        cout<<"Student Percentage-: "<<s[i].stu_percentage<<endl;  
        cout<<endl<<endl;  
    }
}