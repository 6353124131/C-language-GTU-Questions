#include<stdio.h>
int main(){
    int age=20;
    int* ptr=&age;
    printf("%d",ptr);
    printf("\n%d",*ptr);
}