#include <stdio.h>

int main() {
    int n = 5;  // n is the SIZE parameter (not literally the center)
    int x = 0;

    // Upper half (including center)
    while (x < n) {
        int y = 0;
        while (y < n - x - 1) {
            printf(" ");
            y++;
        }
        y = 0;
        while (y < 2 * x + 1) {
            printf("*");
            y++;
        }
        printf("\n");
        x++;
    }

    // Lower half
    x = n - 2;
    while (x >= 0) {
        int y = 0;
        while (y < n - x - 1) {
            printf(" ");
            y++;
        }
        y = 0;
        while (y < 2 * x + 1) {
            printf("*");
            y++;
        }
        printf("\n");
        x--;
    }

    return 0;
}
