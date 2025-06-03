#include <stdio.h>
int main(){
int i,n,key;
printf("enter the size of array\n");
scanf("%d",&n);
int a[n];
printf("enter the values of array\n");
for (i=0 ; i<n ; i++)
{
    scanf("%d",&a[i]);
}
printf("enter the value to be searched\n");
scanf("%d",&key);
for (i=0 ; i<n ; i++)
{
    if (a[i]==key)
    {
        printf("elemeent is found at th value of :\n %d",i+1);
        break;
    }
}
if (i==n)
{
    printf("element id NOT FOUND");
}
return 0;
}