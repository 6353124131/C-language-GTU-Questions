#include<stdio.h>
int primeNumber(int a);
int primeNumber(int a){
    if(a%2!=0){
     
         printf("Enter number is  prime  number");
    }
    else{
        printf("Enter number is not prime !");
    }
}
int main(){
    int a;
    printf("Enter the value of a:");
    scanf("%d",&a);
    primeNumber(a);
}