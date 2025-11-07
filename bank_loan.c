#include <stdio.h>

int main() {
    int age;
    double income;

    // Prompt user for age and annual income
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income (Sh): ");
    scanf("%lf", &income);

    // Check eligibility
    if (age >= 21 && income >= 21000) {
        printf("Congratulations! You qualify for a loan.\n");
    } else {
        printf("Unfortunately, we are unable to offer you a loan at this time.\n");
    }

    return 0;
}
