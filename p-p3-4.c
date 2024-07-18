#include <stdio.h>

int main ()
{
  int t1=0,t2=1,t,i,n;
  printf("Enter number n:");
  scanf("%d",&n);
  printf("\n%d",t1);

  for(i=2;i<=n;i++)
    {
      t=t1+t2;
      t1=t2;
      t2=t;
      printf("\n%d",t);
    }
   return 0;
}