#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    int i, j, len = 0, n = 100, count = 1, check = 0, len2 = 0;
    char s1[n];
    char w1[50][50];
    int f1[50] = {0};
    char temp[50];

    cout << "Original String-:";
    cin.getline(s1, n);

    for (i = 0; s1[i] != '\0'; i++)
    {
        if (s1[i] >= 'a' && s1[i] <= 'z')
        {
            s1[i] = s1[i] - 32;
        }
    }

    i = 0; j = 0; len2 = 0;
    while (s1[i] != '\0')
    {
        if (s1[i] != ' ')
        {
            w1[len2][j++] = s1[i];
        }
        else
        {
            w1[len2][j] = '\0';
            len2++;
            j = 0;
        }
        i++;
    }
    w1[len2][j] = '\0';
    len2++;

    for (i = 0; i < len2; i++)
    {
        f1[i] = 1;
        for (j = i + 1; j < len2; j++)
        {
            if (strcmp(w1[i], w1[j]) == 0)
            {
                f1[i]++;
                for (int k = j; k < len2 - 1; k++)
                {
                    strcpy(w1[k], w1[k + 1]);
                    f1[k] = f1[k + 1];
                }
                len2--;
                j--;
            }
        }
    }

    for (i = 0; i < len2; i++)
    {
        cout << w1[i] << " : " << f1[i] << endl;
    }
}
