#include <stdio.h>
int factorial(int x);
void main()
{
    int a, m;
    printf("Enter the value of you want to find factorial:");
    scanf("%d", &a);
    m = factorial(a);
    printf("The factorial %d=%d", a, m);
}
int factorial(int x)
{
    int fact = 1;
    if (x == 0 || x == 1)
    {
        return (fact);
    }
    while (x > 1)
    {
        fact = fact * x;
        x--;
    }
    return (fact);
}