#include <stdio.h>

int main()
{
    float Area, r;
    printf("Enter the value of r:");
    scanf("%f", &r);

    Area = 3.14 * r * r;
    printf("The area of circle is:%f", Area);

    return 0;
}
