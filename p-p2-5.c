#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks of student:");
    scanf("%d", &marks);
    if (marks <= 100 && marks >= 80)
    {
        printf("Student is in Distinction");
    }
    else if (marks <= 79 && marks >= 60)
    {
        printf("Student is in firts class");
    }
    else if (marks <= 59 && marks >= 40)
    {
        printf("Student is in second class");
    }
    else
    {
        printf("Student is fail !");
    }

    return 0;
}
