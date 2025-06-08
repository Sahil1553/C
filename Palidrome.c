#include <stdio.h>
int main(){
int num,reversed=0,remainder,original;
printf("enter the number :\n");
scanf("%d",&num);
original=num;
while(num!=0)
{
    remainder = num%10;
    reversed = reversed*10 + remainder;
    num = num/10;
}
if (original==reversed)
{
    printf("number is palindrome");
}
else
printf("number is not palindrome");
return 0;
}