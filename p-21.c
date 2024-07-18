#include<stdio.h>
int main()
{
    int n,sum=0,c;
    printf("Enter the value of n:");
    scanf("%d",&n);
    while (n!=0)
    {
        c=n%10;
        n=n/10;
        sum=sum+c;
        
    }
    printf("Ans:%d",sum);
    
    
    return 0;
}
