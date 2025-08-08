#include <iostream>
using namespace std;
struct student
{
    int roll;
    string name;
    int age;
    void getdata()
    {
        cout << "Enter roll number: ";
        cin >> roll;
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter age: ";
        cin >> age;
    }
    void display()
    {
        cout << "Roll Number: " << roll << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};
main()
{
    int n;
    cout<<"How many entries are there-:";
    cin >> n;
    int i;  
    student s[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter details of student " << i + 1 << endl;
        s[i].getdata();
    }
    cout << "\nDisplaying student details:\n";
    for (i = 0; i < n; i++)
    {
        cout << "\nDetails of student " << i + 1 << endl;
        s[i].display();
    }
    return 0;
}