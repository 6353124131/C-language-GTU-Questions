#include<stdio.h>
void swap(int x,int y);
int main()
{
    int a,b;
    printf("Enter the first value:");
    scanf("%d",&a);
    printf("Enter the first value:");
    scanf("%d",&b);
    swap(a,b);
}
void swap(int x, int y){
    int t;
    t=x;
    x=y;
    y=t;
    printf("The first value of =%d\n",x);
    printf("The first value of =%d",y);
    

}