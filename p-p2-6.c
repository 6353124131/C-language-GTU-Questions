#include <stdio.h>
int main()
{
    float nt,basic, da, hra, gross, pf;
    int  ma = 300;
    printf("Enter the Basic:");
    scanf("%f", &basic);
    da=(10*basic)/100;
    hra=(7.5*basic)/100;
    pf=(12.5*basic)/100;
    gross=da+hra+ma+basic;
    nt=gross-pf;

    

    printf("\n Da:%f",da);

    printf("\n Hra:%f",hra);
    printf("\n Ma:%d",ma);
   
    printf("\n Pf:%f",pf);
    printf("\n Gross:%f",gross);
   
    printf("\n Nt:%f",nt);

    return 0;
}
