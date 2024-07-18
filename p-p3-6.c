#include<stdio.h>
int main()
{
    int n,sum=0;
    float AV;
    printf("Enter the value of n:");
    scanf("%d",&n);

    for (int i = 0; i <=n; i++)
    {
       sum=sum+i;
       AV=sum/n;

    }
    printf("Sum=%d",sum);
    printf("\nAV=%f",AV);
}