#include<stdio.h>
int main(){
    FILE *fptr;
   fptr = fopen("text.txt","r");

   int a,b;
   fscanf(fptr,"%d",&a);
   fscanf(fptr,"%d",&b);
   fclose(fptr);
   
   fptr = fopen("text.txt","w");
   fprintf(fptr,"Sum =%d",a+b);
   fclose(fptr);


 return 0;
}