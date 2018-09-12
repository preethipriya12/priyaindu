#include<stdio.h>
#include<conio.h>
int main()
{
int j,i,k;
scanf("%d",&j);
int b[20];
for(i=0;i<j;i++)
{scanf("%d",&b[i]);}
for(i=0;i<j;i++)
{
    for(k=i+1;k<j;k++)
{
if(b[i]==b[k])
printf("%d ",b[i]);}
} return 0;
