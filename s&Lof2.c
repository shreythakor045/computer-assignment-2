#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int largest = (a > b) ? a : b;
    int smallest = (a < b) ? a : b;

    printf("Largest: %d\nSmallest: %d\n", largest, smallest);
    return 0;
}