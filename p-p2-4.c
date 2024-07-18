#include<stdio.h>
int main()
{
    char ch;
    printf("Enter the charactor ch:");
    scanf("%c",&ch);
    if (ch>= 'A' && ch<='Z')
    {
        printf("Enter the charactor is Capital latter");    

    }
    else if (ch>= 'a' && ch <='z')
    {
          printf("Enter the charactor is Small latter"); 
    }
    else if (ch >= '0' && ch <= '9')
    {
           printf("Enter the charactor is digits latter"); 
    }
    else
    {
        printf("Enter the charator is Special charactor");

    }
    
    return 0;
}
