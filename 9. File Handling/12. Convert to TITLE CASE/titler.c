#include <stdio.h>
int main()
{
    FILE *fp = fopen("str.txt", "r");
    char ch;
    int nw = 1;
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == ' ' || ch == '\n')
        {
            nw = 1;
            printf("%c", ch);
        }
        else if (nw == 1)
        {
            if (ch >= 'a' && ch <= 'z')
                ch = ch - 32;
            printf("%c", ch);
            nw = 0;
        }
        else
        {
            if (ch >= 'A' && ch <= 'Z')
                ch = ch + 32;
            printf("%c", ch);
        }
    }
    fclose(fp);
}
