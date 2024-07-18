#include <stdio.h>

#define MAX_STUDENTS 10

// Structure to store student information
struct student_record {
    char name[50];
    char branch[50];
    int total_marks;
};

int main() {
    struct student_record students[MAX_STUDENTS];

    // Read data for each student
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Enter details for student %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", students[i].name);
        printf("Branch: ");
        scanf("%s", students[i].branch);
        printf("Total Marks Obtained: ");
        scanf("%d", &students[i].total_marks);
    }

    // Print data for each student
    printf("\nStudent Information:\n");
    for (int i = 0; i < MAX_STUDENTS; i++) {
        printf("Student %d:\n", i + 1);
        printf("Name: %s\n", students[i].name);
        printf("Branch: %s\n", students[i].branch);
        printf("Total Marks Obtained: %d\n", students[i].total_marks);
        printf("\n");
    }

    return 0;
}
