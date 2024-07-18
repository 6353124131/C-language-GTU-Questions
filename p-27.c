#include<stdio.h>
int main(){
    int a=2;
    int b=3;
    int c;
    int* ptr1=&a;
    int* ptr2=&b;
    int* ptr3=&c;
    printf("%d",*ptr1);
    printf("\n%d",*ptr2);
    *ptr3=*ptr1;
    *ptr1=*ptr2;
    *ptr2=*ptr3;
    printf("\nNew a:%d",*ptr1);
    printf("\nNew b:%d",*ptr2);


}