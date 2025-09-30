#include <stdio.h>

int main() {
    int i, j;
    for(i = 1; i <= 2; i++) {        // outer loop for first number
        for(j = 1; j <= 3; j++) {    // inner loop for second number
            printf("%d %d\n", i, j);
        }
    }
  return 0;
}