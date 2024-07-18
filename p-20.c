#include<stdio.h>
void bainary(int n){
    if (n==0){
        return;
    }
    bainary(n/2);
    printf("%d",n%2);

}
int main(){
    int n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    printf("Binary equivalent: ");
    if(n==0){
        return 0;
    }
    else{

    bainary(n);
    printf("\n");
    }
    return 0;
}