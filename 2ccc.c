#include<stdio.h>
int main()
{
int a[100],i,j,n,temp;
printf("enter the size of an array");
scanf("%d",&n);
printf("enter the elements");
for(i=0;i<n;i++);
{
scanf("%d",&a[i]);
}
printf("the entered array");
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
j=i-1;
i=0;
while(i<j)
{
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
    i++;
    j--;
}
printf("reverse of the array is");
for(i=0;i<n;i++)
{
    printf("%d",a[i]);
}
return 0;
}
