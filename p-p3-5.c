#include<stdio.h>
int main()
{
    int n, sum, b;
    printf("Enter the value of n:");
    scanf("%d", &n);
    int a = n % 10;
    while (n>=10)
    {
    n = n / 10;
    }
    b=n%10;
    
    
    sum = a + b;
    printf("%d", sum);

    return 0;
}
