#include<stdio.h>
int main()
{
    int a;
    printf("Enter the marks of student:");
    scanf("%d",&a);
    if (a>=40)
    {
        printf("Student is pass in Exam");
    }
    else
    {
        printf("Student is fail in Exam");
    }
    
    return 0;
}
