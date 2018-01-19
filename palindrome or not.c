#include<stdio.h>
void main()
{
int n,rem,a=0;
scanf("%d",&n);
while(n!=0)
{
rem=n%10;
a=a*10+rem;
n=n/10;
}
if(n==a)
printf("number is palindrome");
else
printf("number is not a palindrome");
}
