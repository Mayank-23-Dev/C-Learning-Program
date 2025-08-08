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
        if (ch == 'a'|| ch == 'e'|| ch == 'i'|| ch == 'o'|| ch == 'u' ||
            ch == 'A'|| ch == 'E'|| ch == 'I'|| ch == 'O'|| ch == 'U')
        {
            fputc(ch, fp);
        }
    }
    fclose(fp);
}
