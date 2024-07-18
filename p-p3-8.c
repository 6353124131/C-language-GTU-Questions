#include <stdio.h>

int main() {

    int n = 5;

    // Variables
    int sum = 0;
    float h, w;

    printf("Enter the height and weight for five persons:\n");

    for (int i = 0; i < n; i++) {
        printf("Person %d:\n", i + 1);

        // Input height and weight
        printf("  Enter height (in cm): ");
        scanf("%f", &h);

        printf("  Enter weight (in kg): ");
        scanf("%f", &w);

        // Check conditions
        if (h > 170 && w < 50) {
            sum++;
        }
    }

    // Display result
    printf("\nNumber of persons with h > 170 and w < 50: %d\n", sum);

    return 0;
}
