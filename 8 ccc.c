#include<stdio.h>
int main()
{
int r1,r2,c1,c2,i,j,k;
int mat1[20][20],mat2[20][20],matres[20][20];
printf("Enter row and column of first matrix");
scanf("%d %d",&r1,&c1);
printf("Enter row and column of second matrix");
scanf("%d %d",&r2,&c2);
if(c1!=r2)
printf("Matrices cannot be multiplied");
else
{
printf("Enter Matrix 1 values");
for(i=0;i<r1;i++)
for(j=0;j<c1;j++)
scanf("%d",&mat1[i][j]);
printf("Enter Matrix 2 values");
for(i=0;i<r2;i++)
for(j=0;j<c2;j++)
scanf("%d",&mat2[i][j]);
for(i=0;i<r1;i++)
for(j=0;j<c2;j++)
{
matres[i][j]=0;
for(k=0;k<r2;k++)
matres[i][j]+=mat1[i][k]*mat2[k][j];
}
printf("The Product Matrix is:\n");
for(i=0;i<r1;i++)
{
printf("\n");
for(j=0;j<c2;j++)
printf("%d ",matres[i][j]);
}
}
}
