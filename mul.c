#include <stdio.h>
int main(void) {
int t,mul=1,x;
//declaration
scanf("%d",&t);
int y=t;
if(t!=0){
while(y!=0)
{
x=y%10;
y=y/10;
mul=mul*x;
}
printf("%d",mul*t);
}
else
printf("0");
return 0;
}
