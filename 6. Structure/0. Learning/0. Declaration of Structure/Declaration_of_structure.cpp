#include <iostream>
using namespace std;
struct s_record
{
    int s_id;
    char s_name[20];
    int age;
};
typedef struct s_record stu;
main()
{
    stu s;
    char ignore[2];
    cout<<"Enter ID of Student-:";
    cin>>s.s_id;
    cin.getline(ignore,2);
    cout<<"Enter Name of Student-:";
    cin.getline(s.s_name,20);
    cout<<"Enter Age-:";
    cin>>s.age;
    cout<<"\t"<<"\t"<<"Record of Student"<<endl;
    cout<<"Student Id-:"<<s.s_id<<endl;
    cout<<"Student Name-:"<<s.s_name<<endl;
    cout<<"Student Age-:"<<s.age<<endl;
}
