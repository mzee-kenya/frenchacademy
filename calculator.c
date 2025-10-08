#include<stdio.h>

int main() {
    int a, b;
    int s, p, q;

    printf("First number: ");
    scanf("%d", &a);

    printf("Second number: ");
    scanf("%d", &b);

    s = a + b;
    p = a * b;
    q = a / b;   // Watch out: if b = 0, this will cause an error!

    printf("Sum: %d\n", s);
    printf("Product: %d\n", p);
    printf("Quotient: %d\n", q);

    return 0;
}
