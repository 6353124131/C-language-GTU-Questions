#include <stdio.h>
int main()
{
    int n;
    printf("Enter the positive number:");
    scanf("%d", &n);
   
            if (n%2!=0)
            {
                printf("This number is prime");
            }
            else
            {
                printf("This number is not prime");
            }
}