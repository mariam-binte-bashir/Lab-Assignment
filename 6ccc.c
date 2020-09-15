#include<stdio.h>
int main()
{
 int array[10];
 int size,i,j,temp;
 printf("Enter the size of array");
 scanf("%d",&size);
 printf("Enter the array");
 for(i=0;i<size;i++)
 scanf("%d",&array[i]);
 for(i=0;i<size;i++)
 for(j=0;j<i;j++)
 if(array[i]>array[j])
{
temp=array[i];
array[i]=array[j];
array[j]=temp;
}
printf("The largest 3 numbers are:");
for(i=0;i<3;i++)
printf("%d ",array[i]);
}
