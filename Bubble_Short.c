#include <stdio.h>
int main(){
int i,j,n,temp;
printf("enter the size of array");
scanf("%d",&n);
int a[n];
printf("enter the elements of array");
for (i=0; i<n; i++){
scanf("%d",&a[i]);
}
for (i=0; i<n-1; i++)
{
    for (j=0; j<n-i-1; j++)
    if (a[j]>a[j+1])
    {
temp=a[j];
a[j]=a[j+1];
a[j+1]=temp;
    }
}
for (i=0; i<n; i++)
{
    printf("%d",a[i]);
}
return 0;
}