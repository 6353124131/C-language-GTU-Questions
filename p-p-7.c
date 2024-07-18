#include <stdio.h>
int main()
{
    float d, u, t, a;
    printf("Enter the value of u:");
    scanf("%f", &u);
    printf("Enter the value of t:");
    scanf("%f", &t);
    printf("Enter the value of a:");
    scanf("%f", &a);
    d = u * t + a * t * t;
    printf("Distance travelled= %f", d);

    return 0;
}
