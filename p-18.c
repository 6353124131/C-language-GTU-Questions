#include <stdio.h>
int ack(int m, int n)
{
    int y;
    if (m == 0)
    {
        y = n + 1;
    }
    else if (m > 0 && n == 0)
    {
        y = ack(m - 1, 1);
    }
    else if (m > 0 && n > 0)
    {
        y = ack(m - 1, ack(m, n - 1));
    }
    else
    {
        printf("Erroe !");
    }
    return (y);
}
void main()
{
    int x;
    x = ack(1, 1);
    printf("Result of ackerman function:%d", x);
}