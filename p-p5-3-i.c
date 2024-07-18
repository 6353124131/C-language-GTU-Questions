#include<stdio.h>
int main()
{
    int i,j,ch='E';
    for ( i = 4; i >= 0; i--)
    {
       for ( j = 0; j<=i; j++)
       {
        printf("%c",ch-i);
        
       }
       printf("\n");
    }
    
    return 0;
}