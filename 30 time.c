#include<stdio.h>
int main(void)
{
int h1,m1,s1,h2,m2,s2,h3,m3,s3;
printf("TIME1#");
SCANF("%d%d%d",&h1,&m1,&s1);
printf("TIME2#");
scanf("%d%d%d",&h2,&m2,&s2);
m3=((s1+s2)%60);
printf("%d",m3);
printf((" program ends\n");
return 0;
}
