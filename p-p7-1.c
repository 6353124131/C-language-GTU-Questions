#include<stdio.h>
#include<string.h>
int main()
{
    char name[10];
    
    printf("Enter Text in s:");
   gets(name);
    // printf("%s",str);

    printf("Number of charactor in string:%d",strlen(name));
    return 0;
}
