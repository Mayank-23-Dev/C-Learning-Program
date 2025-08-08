#include <stdio.h>
int main()
{
    FILE *fp = fopen("str.txt", "w");
    char ch;
    while (1)
    {
        scanf("%c", &ch);
        if (ch == '$')
            break;
        if (ch >= 'a' && ch <= 'z')
            ch = ch - 32;
        fputc(ch, fp);
    }
    fclose(fp);
}
