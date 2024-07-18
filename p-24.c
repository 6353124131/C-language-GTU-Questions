#include <stdio.h>

int main() {
    FILE *data_file, *even_file, *odd_file;
    int num;

    // Open the data file for reading
    data_file = fopen("data", "r");
    if (data_file == NULL) {
        printf("Error opening data file.\n");
        return 1;
    }

    // Open the even file for writing
    even_file = fopen("even", "w");
    if (even_file == NULL) {
        printf("Error opening even file.\n");
        fclose(data_file);
        return 1;
    }

    // Open the odd file for writing
    odd_file = fopen("odd", "w");
    if (odd_file == NULL) {
        printf("Error opening odd file.\n");
        fclose(data_file);
        fclose(even_file);
        return 1;
    }

    // Read numbers from data file and separate them into even and odd files
    while (fscanf(data_file, "%d", &num) != EOF) {
        if (num % 2 == 0) {
            fprintf(even_file, "%d\n", num);
        } else {
            fprintf(odd_file, "%d\n", num);
        }
    }

    // Close all files
    fclose(data_file);
    fclose(even_file);
    fclose(odd_file);

    // Display contents of even file
    printf("Contents of even file:\n");
    even_file = fopen("even", "r");
    if (even_file == NULL) {
        printf("Error opening even file for reading.\n");
        return 1;
    }
    while (fscanf(even_file, "%d", &num) != EOF) {
        printf("%d\n", num);
    }
    fclose(even_file);

    // Display contents of odd file
    printf("\nContents of odd file:\n");
    odd_file = fopen("odd", "r");
    if (odd_file == NULL) {
        printf("Error opening odd file for reading.\n");
        return 1;
    }
    while (fscanf(odd_file, "%d", &num) != EOF) {
        printf("%d\n", num);
    }
    fclose(odd_file);

    return 0;
}
