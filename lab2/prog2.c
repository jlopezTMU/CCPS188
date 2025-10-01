#include <stdio.h>
#include <stdbool.h>
#include <math.h>


static bool is_prime(int n) {
if (n <= 1) return false;
if (n <= 3) return true; // 2 and 3 are prime
if (n % 2 == 0) return false; // even > 2
for (int d = 3; d * d <= n; d += 2) {
if (n % d == 0) return false;
}
return true;
}


int main(void) {
int n;
printf("Enter an integer: ");
if (scanf("%d", &n) != 1) {
printf("Invalid input.\n");
return 1;
}


printf("%d is %s.\n", n, (n % 2 == 0) ? "even" : "odd");
printf("%d is %sprime.\n", n, is_prime(n) ? "" : "not ");
return 0;
}
