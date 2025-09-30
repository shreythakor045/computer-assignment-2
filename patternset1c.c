#include <stdio.h>

int main() {
    for (int i = 1; i <= 2; i++) {
        for (int j = 1; j <= 2; j++) {
            for (int k = 1; k <= 2; k++) {
                int num = j * 10 + k;  // makes 11,12,21,22 in order
                printf("%d %d\n", i, num);
            }
        }
    }
    return 0;
}
