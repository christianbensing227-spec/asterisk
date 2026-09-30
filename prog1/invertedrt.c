#include <stdio.h> 

int main() {
    int x = 3;
    while( x >= 0) {
         int y = 0;
         while( y <= x) {
        printf("*");
        y++; 
    }
        printf("\n");
        x--; 
    }
    return 0;
}
