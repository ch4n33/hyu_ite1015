#include <iostream>
#include <stdio.h>

int main() {
    for (int i = 0; i < 9; ++i) {
        for (int j = 0; j < 16 - (2*i); j+= 2) {
            printf(" ");
        }
        for (int k = 0; k < i; ++k) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}