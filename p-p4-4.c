#include <stdio.h>

int main()
{
    int n, factorial=1;
    float sum = 0.0;
    printf("Eneter the value of n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        factorial*=i;
        sum += 1.0 / factorial;
    }
    printf("Your Ans. :%f\n",sum);
    return 0;
}

