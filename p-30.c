#include<stdio.h>
int main(){
    FILE *fp_data,*fp_even;
    int m,number;
    printf("Enter the number %d=",i+1);
    scanf("%d",&number);
    putw(number,fp_data);

}

fclose(fp_data);
fp_data=fopen("data.txt","r");
fp_odd=fopen("odd.txt","w");
fp_even=fopen("even.txt","w");
printf("Elements in data file:\n");
while (number = gets(fp_data)!=EOF)             
{
   printf("%d\t",number);
   if (number % 2 ==0)
   {
        putw(number,fp_even);
   }
   else
   {
    putw(number,fp_odd);
   }

   printf("\n");
   fclose(fp.odd);
   fclose(fp.even);
   fclose(fp.data);
   fp_odd=fopen("odd.txt","r");
   printf("Element in odd file :\n");
   while ((number = getw (fp_odd))!=EOF)
   {
    printf("%d\t",number);

   }
   printf("\n");
   fclose(fp_odd);
   fp_even=fopen("even.txt","r");
   printf("Element in even file:\n");
   while ((number = getw(fp_even))!=EOF)
   {
    printf("%d\t",number);
   }
   printf("\n");
   fclose(fp_even);
   
   
   return 0;
}
