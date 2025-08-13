#include <stdio.h>

int main()
{
    FILE *fp = fopen("pass.txt", "r");
    char ch, ch1, ch2, check = 1;
    int i=0;
    while ((ch2 = fgetc(fp)) != EOF)
    {
        i++;
    }
    int j=0;
    printf("Enter a password to verify: ");
    while ((ch = fgetc(fp)) != EOF)
    {
        j++;
        scanf(" %c", &ch1);
        if (ch1 == '\n')
        break;
        else if (ch != ch1)
        {
            check = 0;
        }
    }
    scanf("%c", &ch1);
    if (check==1 && i==j)
    printf("Password Correct!\n");
    else
    printf("Wrong Password!\n");
    fclose(fp);
}
