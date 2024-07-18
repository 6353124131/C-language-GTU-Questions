#include<stdio.h>
int main()
{
    int i,j,ch='A';
    for ( i = 4; i >= 0; i--)
    {
       for ( j = 0; j<=i; j++)
       {
        printf("%c",ch+j);
       }
       printf("\n");
    }
    
    return 0;
}