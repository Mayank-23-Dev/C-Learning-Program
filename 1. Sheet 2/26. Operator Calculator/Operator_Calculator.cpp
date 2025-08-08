#include <iostream>
using namespace std;
int main()
{
    int n1, n2;
    char op;

    cout << "Enter the first integer: ";
    cin >> n1;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> op;

    cout << "Enter the second integer: ";
    cin >> n2;

    if (op == '+')
    {
        cout << "Result: " << n1 + n2 << endl;
    }
    else if (op == '-')
    {
        cout << "Result: " << n1 - n2 << endl;
    }
    else if (op == '*')
    {
        cout << "Result: " << n1 * n2 << endl;
    }
    else if (op == '/')
    {
        if (n2 != 0)
        {
            cout << "Result: " << n1 / n2 << endl;
        }
        else
        {
            cout << "Error: Division by zero is not allowed." << endl;
        }
    }
    else
    {
        cout << "Invalid operator entered." << endl;
    }
}
