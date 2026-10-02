#include <stdio.h>

int main() {
    int z = 3; 
    int x = 1;
    while (x <= z) {
        int y = 1;
        while (y <= z - x) {
            printf(" ");
            y++;
        }
        y = 1;
        while (y <= 2 * x - 1) {
            printf("*");
            y++;
        }
        printf("\n");
        x++;
    }
    
    
    x = z - 1;
    while (x >= 1) {
        int y = 1;
        while (y <= z - x) { 
            printf(" ");
            y++;
        }
        y = 1;
        while (y <= 2 * x - 1) { 
            printf("*");
            y++;
        }
        printf("\n");
        x--;
    }
    return 0;
}
