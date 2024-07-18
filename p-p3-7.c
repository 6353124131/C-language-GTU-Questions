#include <stdio.h>

int main() {

    int n = 5;

  
    int AV;
int sub1, sub2, sub3,total;

    printf("Enter the marks of each subject for five student:\n");

    for (int i = 0; i < n; i++) {
        printf("\nStudent %d:\n", i + 1);

      
        printf("  Enter marks of sub1 : ");
        scanf("%d", &sub1);
        
        printf("  Enter marks of sub2 : ");
        scanf("%d", &sub2);
        
        printf("  Enter marks of sub3 : ");
        scanf("%d", &sub3);

       

        
        for (int j = 0; j < 5; j++)
        {   
            total=sub1+sub2+sub3;
            AV=total/3;
           
        }
           
            printf("\nTotal marks:%d",total);
            printf("\n Average:%d",AV);
        
    }



    return 0;
}
