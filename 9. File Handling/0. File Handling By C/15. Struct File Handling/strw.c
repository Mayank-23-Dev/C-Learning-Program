#include<stdio.h>
#include<stdlib.h>
struct class
{
    int r_num;
    char name[20];
    int age;
};
int main()
{
    FILE *fp=NULL;
    fp=fopen("Class_XII.txt","w");
    if(fp==NULL)
    {
        printf("Error!! Memory is Full.");
        exit(0);
    }
    int n;
    printf("Enter the Number of Student Entries : ");
    scanf("%d",&n);
    struct class s[n];
    char ignore[2];
    int i;
    fprintf(fp,"Roll_Number\tName\tAge\n");
    for ( i = 0; i < n; i++)
    {
        printf("Enter Roll Number-: ");
        scanf("%d",&s[i].r_num);
        gets(ignore);
        printf("Enter Name-: ");
        gets(s[i].name);
        printf("Enter Age-: ");
        scanf("%d",&s[i].age);
        gets(ignore);
        fprintf(fp,"%d\t%s\t%d\n",s[i].r_num,s[i].name,s[i].age);
        printf("\n");
    }
    fclose(fp);
}