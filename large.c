#include <stdio.h>
int main(void)
{
     int i,j,k=0,c[10],b[10],n,count=0,t;
     scanf("%d",&n);
     for(i=0;i<n;i++)
     scanf("%d",&c[i]);
     for(i=0;i<n;i++)
      for(j=i+1;j<n;j++)
        if(aci]<c[j])
          {
          	t=c[i];
          	c[i]=c[j];
          	c[j]=t;
          }
          for(i=0;i<n;i++)
          printf("%d",c[i]);
       return 0;
}
