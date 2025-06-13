#include <stdio.h>
#include <string.h>
struct student
{
    int roll;
    char sname[20];
    float marks;
};
int main()
{
    struct student s[2];
    int i;
    for ( i = 0; i < 2; i++)
    {
    printf("Enter the details of student %d : ",i+1);
    printf("Enter the roll no of student\n");
    scanf("%d",&s[i].roll);
    printf("Enter the name of the student\n");
    scanf(" %[^\n]",&s[i].sname);
    printf("Enter the marks of the student\n");
    scanf("%f",&s[i].marks);
    }
    for ( i = 0; i < 2; i++)
    {
        printf("Details of student %d : \n",i+1);
        printf("Roll number : %d\n",s[i].roll);
        printf("Student name is : %s\n",s[i].sname);
        printf("Marks : %.2f\n",s[i].marks);

    }
}
    
