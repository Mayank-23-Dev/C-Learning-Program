#include <iostream>
using namespace std;

int main()
{
    int i, j, m, n;
    cout << "How many Rows do you want-: ";
    cin >> m;
    cout << "How many Columns do you want-: ";
    cin >> n;
    int a[m][n];
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "Enter Element-:";
            cin >> a[i][j];
        }
    }
    cout<<"\nOriginal Matrix-:\n"<<endl;
    for (i = 0; i <m;i++)
    {
        for (j = 0; j < n; j++)
        {
            cout<<a[i][j]<<"   ";
        }
        cout<<endl;
    }
    for (i = 0; i < m / 2; i++)
    {
        for (j = 0; j < n; j++)
        {
            int temp = a[i][j];
            a[i][j] = a[m - 1 - i][j];
            a[m - 1 - i][j] = temp;
        }
    }
    cout << "\nMatrix after swapping rows:\n";
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << a[i][j] << "   ";
        }
        cout << endl;
    }
}
