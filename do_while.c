#include <stdio.h>

int main() {
    int number;
    char choice;

    do {
        printf("Enter a number: ");
        scanf("%d", &number);
        printf("You entered: %d\n", number);

        printf("Do you want to enter another number? (y/n): ");
        scanf(" %c", &choice); // Note the space before %c to consume any leftover newline
    } while (choice == 'y' || choice == 'Y');

    printf("Goodbye!\n");
    return 0;
}