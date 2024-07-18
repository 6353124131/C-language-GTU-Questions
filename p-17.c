#include<stdio.h>
void fibo(int n){
    int t1=0,t2=1,t;
    printf("Fibonacci series up to %d term:\n",n);
    for (int i = 1; i <=n; i++)
    {
        printf("%d,",t1);
        t=t1+t2;
        t1=t2;
        t2=t;
    }
    
}
int main(){
    int n;
    printf("Enter the value of term n:");
    scanf("%d",&n);
    fibo(n);
    return 0;
}