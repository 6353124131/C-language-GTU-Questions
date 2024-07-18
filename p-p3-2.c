#include<stdio.h>

int main()
{
    int n,i, fac=1;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
       fac=fac*i;
    }
        printf("Your ans. in factorial:%d",fac);
    
    
    
    return 0;
}