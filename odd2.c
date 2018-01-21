#include<stdio.h>
int main()
{
int num,m=20,n=40;
printf("print odd numbers in a given range mto n:\n");
for(num=m;num<=n;num++)
{
if(num%2==1)
printf("%d",num);
}
return 0;
}
