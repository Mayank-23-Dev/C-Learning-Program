#include <iostream>
using namespace std;

int main() {
    int m;

    cout << "Enter total marks obtained: ";
    cin >> m;

    if (m <= 0) 
    {
        cout << "Error: Marks cannot be zero or negative!" << endl;
    } 
    else 
    {
        cout << "Streams Allotted: ";

        if (m >= 300) 
        {
            cout << "Science, Commerce, Arts" << endl;
        } 
        else if (m >= 200) 
        {
            cout << "Commerce" <<",";
            if (m >= 75) 
            {
            cout << "Arts" << endl;
            }
        } 
        else if (m >= 75) 
        {
            cout << "Arts" << endl;
        } 
        else 
        {
            cout << "None. You have to appear in a qualifying examination." << endl;
        }
    }

}
