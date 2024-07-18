#include <stdio.h>
// Calculate Simple interest
int main()
{
    float i, p, r;
    int n;
    printf("Enter the value of p:");
    scanf("%f", &p);
    printf("Enter the value of r:");
    scanf("%f", &r);
    printf("Enter the value of n:");
    scanf("%f", &n);
    i = 0.01 * p * r * n;
    printf("Simple interest i = %f", i);
    return 0;
}
