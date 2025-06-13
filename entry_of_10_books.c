#include <stdio.h>
#include <string.h>
struct library
{
    char book_title[20];
    float price;
    int pages;
};
int main()
{
    struct library books[10];
    int i;
    for (i=0; i<4; i++)
    {
    printf("enter the detail of %d book:\n",i+1);
    printf("Titles : ");
    scanf(" %[^\n]",&books[i].book_title);
    printf("Price : ");
    scanf("%f",&books[i].price);
    printf("Pages : ");
    scanf("%d",&books[i].pages);
    }

    for (i=0; i<4; i++)
    {
        printf("Book %d : \n",i+1);
        printf("Book Title : %s\n",books[i].book_title);
        printf("Price : %.2f\n",books[i].price);
        printf("Pages : %d\n",books[i].pages);
    }
    }

    

