#include <stdio.h>
int main()
{
  int mark[20];
  for(int i=1; i<=20; i++){
    printf("Student %d:",i);
    printf("\nEnter marks:");
    scanf("%d", &mark[i]);
  }

    return 0;
}
