#include <stdio.h>
#include <stdlib.h>
struct student
{
    char name[20];
    int age;
};
int main()
{
    FILE *fp=NULL;
    fp=fopen("saras","wb");
    if (fp==NULL)
    {
        printf("Error!!!Memory is Full");
        exit(0);
    }
    struct student s[5];
    char ignore[2];
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("Enter Name-: ");
        gets(s[i].name);
        // printf("\n");
        printf("Enter Age-: ");
        scanf("%d",&s[i].age);
        // printf("\n");
        gets(ignore);
        fwrite(&s[i],sizeof(s[i]),1,fp);
    }
    fclose(fp);
}