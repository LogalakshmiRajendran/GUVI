#include <stdio.h>
#include<string.h>

void main()
{
	char b[100]="welcome you";
	 int i,count=0;
	for(i=0;b[i]!='\0';i++)
	{
		if(b[i]==' ')
			count++;
	}
	printf("no. of words are %d",count+1);
	
}
