#include<stdio.h>
int main()
{
 int array[20];
 int i,size,pos,val;
 printf("Enter size of the array");
 scanf("%d",&size);
 printf("Enter the array elements");
 for(i=0;i<size;i++)
  scanf("%d",&array[i]);
 printf("Enter the position");
 scanf("%d",&pos);
 if(pos>size)
  printf("Unable to replace");
 else
 {
  printf("Enter the value");
  scanf("%d",&val);
  array[pos-1]=val;
  printf("Updated array is:");
  for(i=0;i<size;i++)
   printf("%d ",array[i]);
 }
}

