#include<stdio.h>
#include<stdlib.h>
int main()
{
int first,diff,terms,value,sum=0,i;
printf("Enter the number of terms in AP series/n");
scanf("%d",&terms);
printf("ENTER THE FIRST TERMS AND COMMOM DIFFERENCE OF ap SERIES/n");
scanf("%d%d",&first,&diff);
value=first;
printf("AP SERIES/n");
for(i=0;i<terms;i++)
printf("%d",value);
sum+=value;
value=value+diff;
}
printf("\n sum of the AP series till %d terms is %d\n",terms,sum);
grtch();
return 0;
}
