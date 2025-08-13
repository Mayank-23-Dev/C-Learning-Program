#include <stdio.h>
int main()
{
    FILE* fp=fopen("sentence.txt","r");
    char ch;
    char ch1;
    int space=0,line=0;
    while((ch=fgetc(fp))!=EOF)
    {
        if (ch==' ')
        {
            space++;
        }
        else if(ch=='\n')
        {
            line++;
        }  
        ch1=ch;
    }
    printf("Total Number of Words-: %d",space+line+1);
    printf("\nTotal Number of Line-: %d",line+1);
    fclose(fp);
}