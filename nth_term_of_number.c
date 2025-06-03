#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main(){
int an,a1,a2,a3,n,d;
printf("enter the required term : ");
scanf("%d",&n);  
printf("enter the first term : ");  
scanf("%d",&a1);
printf("enter the second term : ");  
scanf("%d",&a2);
printf("enter the third term : ");  
scanf("%d",&a3);
d=a2-a1;
an=a1+((n-1)*d);
printf("th reqired term is : %d",an);
    return 0;
}