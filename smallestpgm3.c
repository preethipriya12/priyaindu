#include <stdio.h>
void main()
{
    int num,i,j,b[10],n=0,temp=0,k;
    scanf("%d",&num);
    scanf("%d",&k);
    while(num!=0)
    {
        b[n++]=num%10;
        num=num/10;
    }
    for(i=0;i<n-1;i++)
    {
      for(j=i+1;j<n;j++)
          { if(b[i]>b[j]){
               temp=b[i];
               b[i]=b[j];
               b[j]=temp;}
           }
           temp=0;
    for(i=0;i<n-k;i++)
     temp=temp*10+b[i];
    printf("%d",temp);
  
}
