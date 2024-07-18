#include <stdio.h>
struct person
{
    char name[20];
    char date[20];
    int salary;
    
};

int main()
{
    struct person s[2];
   for (int  i = 0; i < 1; i++)
   {
     printf("Enter Information of person %d",i+1);
    printf("\nEnter name:");
    scanf("%s",s[i].name);
    printf("\nEnter date:");
    scanf("%s",s[i].date);
    printf("\nEnter salary:");
    scanf("%d",s[i].salary);
   }
   printf("\n");

   for (int  i = 0; i <1; i++)
   {
    printf("\nInformation of person %d",i+1);
    printf(" \nname:%s",s[i].name);

    printf("\njoing  date:%s",s[i].date);
   
    printf(" \nsalary:%d",s[i].salary);
   
   }
   
    

    return 0;
}