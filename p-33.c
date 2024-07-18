#include<stdio.h>
#include<stdlib.h>
int main(){
    float *ptr;
    int n;

    ptr = (float*) calloc(n,sizeof(float));
    
    printf("Enter the value of n:");
    scanf("%d",&n);

    for(int i=0; i<n; i++){
        printf("%f\n",ptr[i]);

    }

    free(ptr);
    ptr = (float*) calloc(2,sizeof(float));
       for(int i=0; i<2; i++){
        printf("%f\n",ptr[i]);

    }



    return 0;
}