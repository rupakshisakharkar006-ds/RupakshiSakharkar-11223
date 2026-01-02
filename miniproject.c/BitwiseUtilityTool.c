#include <stdio.h>

int main() {
    int a, b, choice;

    // Input two integers
    printf("Enter first integer: ");
    scanf("%d", &a);

    printf("Enter second integer: ");
    scanf("%d", &b);

    // Display menu
    printf("\n--- Bitwise Operations Menu ---\n");
    printf("1. Bitwise AND (&)\n");
    printf("2. Bitwise OR (|)\n");
    printf("3. Bitwise XOR (^)\n");
    printf("4. Left Shift (<<)\n");
    printf("5. Right Shift (>>)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);

    // Switch case for operations
    switch (choice) {
        case 1:
            printf("Result of %d & %d = %d\n", a, b, a & b);
            break;

        case 2:
            printf("Result of %d | %d = %d\n", a, b, a | b);
            break;

        case 3:
            printf("Result of %d ^ %d = %d\n", a, b, a ^ b);
            break;

        case 4:
            printf("Result of %d << %d = %d\n", a, b, a << b);
            break;

        case 5:
            printf("Result of %d >> %d = %d\n", a, b, a >> b);
            break;

        default:
            printf("Invalid choice!\n");
    }

    return 0;
}
