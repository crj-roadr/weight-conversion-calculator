#include <stdio.h>

#define FACTOR 2.2046226218

int main() {
    int choice = 1;
    double weight = 0.0;
    double converted_weight = 0.0;

    printf("Weight Conversion Calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to Kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the weight in kilograms: ");
        scanf("%lf", &weight);
        converted_weight = weight * FACTOR;

        printf("%.2lf kilograms is equal to %.2lf pounds\n", weight, converted_weight);
    } else if (choice == 2) {
        printf("Enter the weight in pounds: ");
        scanf("%lf", &weight);
        converted_weight = weight / FACTOR;

        printf("%.2lf pounds is equal to %.2lf kilograms\n", weight, converted_weight);
    } else {
        perror("You entered the wrong choice. Try running the program again.");
    }

    return 0;
}