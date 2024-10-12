#include <stdio.h>

int main() {
    int age;
    float income;

    // Input age and income from user
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your annual income: ");
    scanf("%f", &income);

    // Check if the customer is eligible for a loan
    if (age >= 21 && income >= 21000) {
        printf("Congratulations! You are eligible for a loan.\n");
    } else {
        printf("Unfortunately,we are unable to offer you a loan this time.\n");
    }

    return 0;
}