#include <iostream>
using namespace std;
struct stu_record
{
    int stu_roll;
    char stu_name[20];
    int english;
    int comp_sci;
    int physics;
    int chemistry;
    int maths;
    int total;
    float per;
    char grade;
};
typedef stu_record rec;
main()
{
    int i,n;
    cout<<"How many Entries are There-:";
    cin>>n;
    rec s[n];
    cout<<"\n";
    char ignore[1];
    for (i = 0; i < n; i++)
    {
        cout<<"                             " << "Enter the Details of Student No " << i + 1 << "\n";
        cout<<"Enter ID of Student-:";
        cin>>s[i].stu_roll;
        cin.getline(ignore, 1);
        cout<<"Enter Name of Student-:";
        cin.getline(s[i].stu_name, 20);
        cout<<"Enter Marks of Student in English-:";
        cin>>s[i].english;
        cout<<"Enter Marks of Student in Computer Science-:";
        cin>>s[i].comp_sci;
        cout<<"Enter Marks of Student in Physics-:";
        cin>>s[i].physics;
        cout<<"Enter Marks of Student in Chemistry-:";
        cin>>s[i].chemistry;
        cout<<"Enter Marks of Student in Maths-:";
        cin>>s[i].maths;
        cout<<"\n";
    }
    
    cout<<"                                        "<<"Record of Student"<<endl;
    
    for (i = 0; i < n; i++)
    {
        cout<<"Student Roll Number-: "<<s[i].stu_roll<<endl;
        cout<<"Student Name-: " <<s[i].stu_name<<endl;
        cout<<"Marks in English-: " <<s[i].english<<endl;
        cout<<"Marks in Computer Science-: " <<s[i].comp_sci<<endl;
        cout<<"Marks in Physics-: " <<s[i].physics<<endl;
        cout<<"Marks in Chemistry-: " <<s[i].chemistry<<endl;
        cout<<"Marks in Maths-: " <<s[i].maths<<endl;
        s[i].total=(s[i].english+s[i].comp_sci+s[i].physics+s[i].chemistry+s[i].maths);
        cout<<"Total Marks Achieved-:" <<s[i].total<<endl;
        s[i].per=float(s[i].total)/5.0;
        cout<<"Student Percentage-: "<<s[i].per<<endl;  
        if (s[i].per>=90)
        {
            s[i].grade='A';
        }
        else if (s[i].per<90 && s[i].per>=80)    
        {
            s[i].grade='B';
        }
        else if (s[i].per<80 && s[i].per>=70)    
        {
            s[i].grade='C';
        }
        else if (s[i].per<70 && s[i].per>=55)    
        {
            s[i].grade='D';
        }
        else if (s[i].per<55 && s[i].per>=33)    
        {
            s[i].grade='E';
        }
        else   
        {
            s[i].grade='F';
        }
        cout<<"Grade Achieved-:" <<s[i].grade<<endl;
        cout<<endl<<endl;  
    }
}