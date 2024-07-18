#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the value of a:");
    scanf("%d", &a);
    printf("\nEnter the value of b:");
    scanf("%d", &b);
    printf("\nEnter the value of c:");
    scanf("%d", &c);
    if (a > b)
    {
        if (a > c)
        {
            printf("Maximum no. is a");
        }
        else
        {
            printf("Maximum no. is c");
        }
    }
    else
    {
        if (b > c)
        {
            printf("Maximum no. is b");
        }
        else
        {
            printf("Maximum no. is c");
        }
    }

    return 0;
}
