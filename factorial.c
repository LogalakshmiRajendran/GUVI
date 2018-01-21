#include<stdio.h>
int main()
{
int n,i,f=0;
printf("enter the numbers");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
f=f*i;
printf("factorial number is %d",f);
}
return 0;
}
