#include <stdio.h>
#include <stdbool.h>


int main(void) {
int a, b;
printf("Enter two integers (a b): ");
if (scanf("%d %d", &a, &b) != 2) {
printf("Invalid input.\n");
return 1;
}


int sum = a + b;
int diff = a - b;
long long prod = (long long)a * (long long)b; // avoid overflow for larger ints


printf("Sum: %d\n", sum);
printf("Difference (a-b): %d\n", diff);
printf("Product: %lld\n", prod);


if (b == 0) {
printf("Quotient: undefined (division by zero)\n");
} else {
printf("Quotient (integer division a/b): %d\n", a / b);
printf("Remainder (a%%b): %d\n", a % b);
}


return 0;
}
