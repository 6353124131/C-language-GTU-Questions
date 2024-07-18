#include <stdio.h>
int main()
{
    // int a, b;
    float K, M, F, I, C;
    printf("Enter the value of K in kilometer:");
    scanf("%f", &K);
    
    printf("Enter the value of K in meter M=%f", K * 1000);
    printf("\nEnter the value of K in feet F=%f", K * 3280.8399);
    printf("\nEnter the value of K in inches I=%f", K * 39370.079);
    printf("\nEnter the value of K in Centimeter C=%f", K * 100000);
   
    

    return 0;
}