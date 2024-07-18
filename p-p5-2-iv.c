#include<stdio.h>
int main(){
    int ch='0';
    for(int i=1; i<=5; i++){
        for(int j=4; j>=i; j--){
            printf(" ");
        }
        for(int j=1; j<=i; j++){
            printf(" %c",ch+i);
        }
        printf("\n");
    }
    return 0;
}
