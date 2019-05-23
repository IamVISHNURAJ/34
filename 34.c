#include<stdio.h>
#include<string.h>
void main()
{
int i,count=0;
char a[100];
gets (a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='.')
{
count++;
}
}
printf("%d",count+1);
}