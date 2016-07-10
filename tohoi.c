#include<stdio.h>
int hanoi(int d,char f,char c,char t)
{
if(d==1)
{
printf("\nThe %d disk moved from %c-->%c",d,f,t);
return 0;
}
hanoi(d-1,f,t,c);
printf("\nthe %d disk moved from %c-->%c",d,f,t);
hanoi(d-1,c,f,t);
}
int main()
{
int n;
char f='X',c='Y',t='Z';
printf("enter nio of disk:");
scanf("%d",&n);
hanoi(n,f,c,t);
return 0;
}
