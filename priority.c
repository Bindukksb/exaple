#include<stdio.h>
void main()
{
int a[50],sum=0,i,n;
printf("\n Enter the no of children");
scanf("%d",&n);
printf("\n Enter the Prirority");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
i=0;
do
{
for(i=0;i<=n;i++)
{
sum=sum+a[i];
}
}
while(a[i]!=0&&a[i]<=n);
printf("\n Total num of candies requires = %d",sum);
printf("\n");
}
