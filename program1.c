#include<stdio.h>
void main()
{
int b[]={0,1,2,3,4,5,6,7,8,9};
int sum=0,n,j,i;
 printf("enter n value");
  scanf("%d",&n);
  for(i=0;i<n;i++)
    printf("%d",b[i]);
  printf("enter j value");
  scanf("%d",&j);
  for(i=0;i<=j;j++)
  {
    sum=sum+b[i];
  }
  printf("%d",sum);
}
  
