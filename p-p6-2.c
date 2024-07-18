#include <stdio.h>
int main()
{
  int mark[10];
  for(int i=1; i<=10; i++){
    printf("\nEnter marks:");
    scanf("%d", &mark[i]);
  if (mark[i]%2 == 0)
  {
printf("Enter number is even");
  }
  else
  {
    printf("Enter number is odd");
  }
  
  }

    return 0;
}
