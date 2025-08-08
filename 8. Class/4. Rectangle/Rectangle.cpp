#include <iostream>
using namespace std;
class rectangle
{
    public:
    int length;
    int width;
    void getdata()
    {
        cout << "Enter length: ";
        cin >> length;
        cout << "Enter Width: ";
        cin >> width;
    }
};
main()
{
    int i;  
    class rectangle s;
    cout << "Enter details about Rectangle " << endl;
    s.getdata();
    cout << "\n                     Displaying Data\n";
    cout << "Length = " << s.length << endl;
    cout << "Width = " << s.width<< endl;
    cout << "Area = " << s.length*s.width << endl;
    return 0;
}