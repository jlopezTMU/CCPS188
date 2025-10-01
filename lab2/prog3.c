#include <stdio.h>


int main(void) {
int n;
printf("How many numbers? ");
if (scanf("%d", &n) != 1 || n <= 0) {
printf("Invalid n.\n");
return 1;
}


double sum = 0.0;
int value;
int min, max;


for (int i = 0; i < n; ++i) {
printf("Enter value %d: ", i + 1);
if (scanf("%d", &value) != 1) {
printf("Invalid input.\n");
return 1;
}
if (i == 0) {
min = max = value;
} else {
if (value < min) min = value;
if (value > max) max = value;
}
sum += value;
}


double avg = sum / n;
printf("Min: %d\nMax: %d\nAverage: %.2f\n", min, max, avg);
return 0;
}
