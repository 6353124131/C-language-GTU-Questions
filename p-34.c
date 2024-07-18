#include<stdio.h>
#include<stdlib.h>
int main(){
  int *ptr;
  ptr = (int*) calloc(5,sizeof(int));

  printf("Enter the Number(5):");
  for(int i=0; i<5; i++){
    scanf("%d\t",&ptr[i]);
  }
  ptr = realloc(ptr,8);
   printf("\nEnter the Number(8):");
  for(int i=0; i<8; i++){
    scanf("%d\t",&ptr[i]);
  }
  
  for(int i=0; i<8; i++){
    printf("Number %d is %d ",i,ptr[i]);
  }


    return 0;
}