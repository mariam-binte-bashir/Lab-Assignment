#include<stdio.h>
int main()
{
int array[20],size,i,val,j;
 printf("Enter the size:");
scanf("%d",&size);
printf("Enter array values:");
for(i=0;i<size;i++)
scanf("%d",&array[i]);
for(i=0;i<size;i++)
{
val=array[i];
for(j=i+1;j<size;j++)
{
if(array[i]==array[j]&&array[i]!=-1)
{
array[j]=-1;
printf("Copy of %d found at: %d \n",array[i],j);
}
}
}
}
