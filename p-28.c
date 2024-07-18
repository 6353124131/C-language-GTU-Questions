#include<stdio.h>
int main(){
    char str[20],*ptr;
    int i=0;
    printf("Enter the string=");
    scanf("%s",str);
      ptr = & str[i];
    printf("character \t address \n");
    while (str[i]!='\0')
    {
        printf("%c\t \t", *ptr);
        printf("%u\n",ptr);
        ptr++;
        i++;
        
    }
    return 0;

}