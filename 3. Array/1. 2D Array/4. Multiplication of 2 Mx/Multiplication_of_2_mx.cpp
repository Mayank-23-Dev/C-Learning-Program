#include <iostream>
using namespace std;
int main()
{
    int n, m, p,i,j;
    cout << "Rows of A: ";
    cin >> n;
    cout << "Cols of A / Rows of B: ";
    cin >> m;
    cout << "Cols of B: ";
    cin >> p;
    int a[n][m], b[m][p], c[n][p];
    cout<<"Mx A-:"<<endl;
    for (i = 0; i <n;i++)
    {
        for (j = 0; j < m; j++)
        {
            cout<<"     "<<"Enter Element-:";
            cin>>a[i][j];
        }
    }
    cout<<"Mx B-:"<<endl;
    for (i = 0; i <m;i++)
    {
        for (j = 0; j < p; j++)
        {
            cout<<"     "<<"Enter Element-:";
            cin>>b[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
        {
            c[i][j] = 0;
            for (int k = 0; k < m; k++)
                c[i][j] = c[i][j]+(a[i][k] * b[k][j]);
        }
    }
        

    cout<<"Mx C-:"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < p; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }
}