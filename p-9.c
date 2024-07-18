#include<stdio.h>
int main()
{
    char str[10]="computer";
    for (int i = 1; i <= 8; i++)
    {
        printf("\n%*.*s",i,i,str);
       
    }
       for (int j = 7; j >= 1; j--)
       {
         printf("\n%*.*s",j,j,str);
       }
   
    
   
    return 0;
}