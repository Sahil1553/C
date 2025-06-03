#include <stdio.h>
int main(){
int i,n,fact=1;
printf("enter the number : \n");
scanf("%d",&n);
for ( i = n; i >=1; i--)
{
    fact=fact*i;
}
printf("factorial of nnumber is : %d",fact);

return 0;
}