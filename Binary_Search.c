#include <stdio.h>
int main(){
int i,n,key,start=0,mid;
printf("enter the size of array\n");
scanf("%d",&n);
int a[n],end=n-1;
printf("enter the values of array\n");
for (i=0 ; i<n ; i++)
{
    scanf("%d",&a[i]);
}
printf("enter the value to be searched\n");
scanf("%d",&key);
while (start<=end)
{
 mid=(start+end)/2;
    if (a[mid]==key)
    {
        printf("element is found at th index of :\n %d",mid+1);
        break;
    }
else 
{
    if (key<a[mid])
    end = mid-1;
    else
    start = mid+1;
}
}
if (start>end)
printf("Element is not present in the list");
return 0;
}