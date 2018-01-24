#include<stdio.h>
#include<string.h>
int main(int argc,char*argv[])
{
char*str=argv[1];
size_t span=strspn(str,"0123456789.");
if(str[span]=='\0')
{
printf(" the string has only number and '.'!");
}
else
{
printf(" the string has characters that are not numbers or period!");
}
