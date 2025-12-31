#include <stdio.h>
int main() {
    int a, b, choice;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    printf("1:Add 2:Sub 3:Mul 4:Div\n");
    scanf("%d", &choice);
    switch (choice) {
        case 1: printf("Sum = %d", a + b); break;
        case 2: printf("Difference = %d", a - b); break;
        case 3: printf("Product = %d", a * b); break;
        case 4: printf("Quotient = %d", a / b); break;
        default: printf("Invalid choice");
    }
    return 0;
}
