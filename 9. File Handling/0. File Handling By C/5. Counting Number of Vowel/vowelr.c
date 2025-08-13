#include <stdio.h>
int main()
{
    FILE* fp=fopen("story.txt","r");
    char ch;
    int count=0;
    while((ch=fgetc(fp))!=EOF)
    {
        if (ch=='a' ||ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U' )
        {
            count++;
        }
    }
    printf("Total Number of Vowel-: %d",count);
    fclose(fp);
}