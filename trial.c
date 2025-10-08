// ...existing code...
#include <stdio.h>

int main(void) {
    int balance = 0;
    int amount = 0;

    printf("enter the amount you wish to spend: ");
    if (scanf("%d", &amount) != 1) {
        fprintf(stderr, "invalid amount\n");
        return 1;
    }

    printf("enter your balance: ");
    if (scanf("%d", &balance) != 1) {
        fprintf(stderr, "invalid balance\n");
        return 1;
    }

    if (amount <= 0) {
        fprintf(stderr, "amount must be > 0\n");
        return 1;
    }

    while (balance > 0) {
        balance -= amount;                /* $balance = balance - amount$ */
        if (balance > 0)
            printf("remaining balance: %d\n", balance);
        else if (balance == 0)
            printf("you have no funds\n");
        else
            printf("you have overdrawn by %d\n", -balance);
    }

    return 0;
}
// ...existing code...
