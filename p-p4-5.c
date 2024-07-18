#include <stdio.h>
#include<math.h>
int main()
{
    int x, factorial=1,sign=-1;
    float sum = 0.0;
    printf("Eneter the value of x:");
    scanf("%d", &x);

    for (int i = 1; i <= 9; i++)
    {
        for (int j = 1; j >0; j--)
        {
        factorial*=j;
            
        }
        sign*=-1;
        sum=sum+ (const) pow(x, i) *sign / factorial;
       
       
    }
    printf("Your Ans. :%f\n",sum);
    return 0;
}



