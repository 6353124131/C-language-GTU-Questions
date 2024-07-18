#include<stdio.h>
int fibo(int n){
    int m;

    if(n==0){
        m=0;
    }
    else if(n==1){
        m=1;
    }
    else{
        m=fibo(n-1)+fibo(n-2);
    }
    return(m);
  
}
void main(){
    int n,term;
    printf("Enter value of n term:");
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        term=fibo(i);
        printf("%d,",term);
    }
}
