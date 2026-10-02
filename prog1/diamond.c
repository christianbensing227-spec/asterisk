#include <stdio.h>

int main() {
    int n = 3; 
    int x = 1;
    while (x <= n) {
        int y = 1;
        while (y <= n - x) {
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
    
    
    x = n - 1;
    while (x >= 1) {
        int y = 1;
        while (y <= n - x) { 
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
