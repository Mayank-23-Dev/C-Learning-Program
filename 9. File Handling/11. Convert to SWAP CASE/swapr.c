#include <stdio.h>
int main()
{
    FILE *fp = fopen("str.txt", "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;
        else if (ch >= 'A' && ch <= 'Z')
            ch = ch + 32;
        printf("%c", ch);
    }
    fclose(fp);
}
