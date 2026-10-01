#include <stdio.h>

int main() {
    int x = 0;

    while (x < 3) {
        int y = 0;

        while (y < 10) {
            printf("*");
            y++;
        }

        printf("\n");
        x++;
    }

    return 0;
}

