#include <stdio.h>

int main() {
    int a, b, c, largest, smallest;

    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    largest = (a > b && a > c) ? a : (b > c ? b : c);
    smallest = (a < b && a < c) ? a : (b < c ? b : c);

    printf("Largest: %d\nSmallest: %d\n", largest, smallest);
    return 0;
}