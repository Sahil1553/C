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
    struct student s1,s2;
    printf("enter the details of student 1\n");
    printf("enter the roll no of student\n");
    scanf("%d",&s1.roll);
    printf("enter the name of the student\n");
    scanf("%s",&s1.sname);
    printf("enter the marks of the student\n");
    scanf("%f",&s1.marks);
    printf("roll no. %d\n",s1.roll);
    printf("student name %s\n",s1.sname);
    printf("marks %.2f\n",s1.marks);

    printf("enter the details of student 2\n");
    printf("enter the roll no of student\n");
    scanf("%d",&s2.roll);
    printf("enter the name of the student\n");
    scanf("%s",&s2.sname);
    printf("enter the marks of the student\n");
    scanf("%f",&s2.marks);
    printf("roll no. %d\n",s2.roll);
    printf("student name %s\n",s2.sname);
    printf("marks %.2f\n",s2.marks);
}
