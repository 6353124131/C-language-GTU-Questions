#include <stdio.h>
int main()
{
    int n;
    float sum = 0.0;
    printf("Eneter the value of n:");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / i;
    }
    printf("Your Ans. :%f\n",sum);
    return 0;
}