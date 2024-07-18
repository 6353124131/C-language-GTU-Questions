#include<stdio.h>
int main()
{
    char str[10]="computer";
    printf("%s",str);
    printf("\n%10.3s",str);
    printf("\n%10.0s",str);
    printf("\n%.3s",str);
    printf("\n%-10.3s",str);
    printf("\n%-10.0s",str);
    printf("\n%-.3s",str);
    printf("\n%10.*s",5,str);
    printf("\n%*.*s",3,6,str);
   
    return 0;
}
