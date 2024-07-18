#include <stdio.h>
int power(int x, int y);
void main()
{
    int a, n, m;
    printf("Enter the value of base:");
    scanf("%d", &a);
    printf("Enter the value of exponent:");
    scanf("%d", &n);
    m = power(a, n);
    printf("%d power %d = %d", a, n, m);
}
int power(int x, int y)
{
    int m = 1;
    for (int i = 1; i <= y; i++)
    {
        m = m * x;
    }
    return (m);
}