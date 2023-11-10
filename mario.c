#include <stdio.h>

int main() {
    int height = 5; // Adjust the height of the pyramid as needed

    for (int i = 1; i <= height; i++) {
        // Print spaces before the characters
        for (int j = 0; j < height - i; j++) {
            printf(" ");
        }

        // Print characters for the pyramid
        for (int k = 0; k < 2 * i - 1; k++) {
            printf("#");
        }

        // Move to the next line after printing each row
        printf("\n");
    }

    return 0;
}