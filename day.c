#include <stdio.h>
int main(){
int day;
printf("enter the day of week :\n");
scanf("%d",&day);
switch (day){
    case 1:
    printf("monday");
    break;
    case 2:
    printf("tursday");
    break;
    case 3:
    printf("wednesday");
    break;
    case 4:
    printf("thursday");
    break;
    case 5:
    printf("friday");
    break;
    case 6:
    printf("saturday");
    break;
    case 7:
    printf("sunday");
    break;
    default:
    printf("wrong data");
}
return 0;
}