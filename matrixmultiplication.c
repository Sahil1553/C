#include <stdio.h>
int main(){
int i,j,r1,c1,r2,c2;
printf("enter the row and matrix 1\n");
scanf("%d",&r1);
printf("enter the column and matrix 1\n");
scanf("%d",&c1);
printf("enter the row of matrix 2\n");
scanf("%d",&r2);
printf("enter the column of matrix 2 \n");
scanf("%d",&c2);
int a[r1][c1],b[r2][c2],m[r1][c2];
if (c1==r2)
{
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Value of a%d%d\t",i+1,j+1);
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r2;i++){
        for(j=0;j<c2;j++){
            printf("Value of b%d%d\t",i+1,j+1);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r1;i++){
        for(j=0;j<c2;j++){
            m[i][j]=0;
            for(int k=0;k<c1;k++){
                m[i][j] = m[i][j] + (a[i][k]*b[k][j]);
            }
        }
    }
    printf("resulting matrix is\n");
    for (i = 0; i < r1; i++){
        for(j=0 ;j<c2 ;j++){
            printf("%d\t",m[i][j]);
        }
        printf("\n");
    }
    
}
else
printf("can't multiply");
printf("resulting transpose of matrix is\n");
    for (i = 0; i < r1; i++){
        for(j=0 ;j<c2 ;j++){
            printf("%d\t",m[j][i]);
        }
        printf("\n");
    }
return 0;
}