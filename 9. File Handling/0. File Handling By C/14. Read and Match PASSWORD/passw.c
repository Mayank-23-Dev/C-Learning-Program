#include <stdio.h>

int main()
{
    FILE *fp = fopen("pass.txt", "w");
    char ch;
    printf("Enter password (end with $): ");
    while (1)
    {
        scanf("%c", &ch);
        if (ch == '$')
            break;
        else
        fputc(ch, fp);
    }
    fclose(fp);
}
