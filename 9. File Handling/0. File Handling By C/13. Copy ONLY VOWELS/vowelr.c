#include <stdio.h>
int main()
{
    FILE *fp = fopen("str.txt", "r");
    char ch;
    while ((ch = fgetc(fp)) != EOF)
    {
        if (ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u' ||
            ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U')
        {
            printf("%c", ch);
        }
    }
    fclose(fp);
}
