#include <stdio.h>

int main() {
    int x = 0;
    while (x < 5) {
        int y = 0;
        while (y < 5) {
            printf("*");
            y++;
        }

        printf("\n");
        x++;
    }

    return 0;
}
