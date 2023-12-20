#include <stdio.h>
int main() {
    int n = 7;  // Number of rows
    for (int i = 1; i <= n; i++) {
        // Loop to print spaces and numbers
        for (int j = 1; j <= n; j++) {
            if (j <= n - i) {
                printf(" "); // Print space for the first part of each row
            } 
            else {
                printf("%d ", i); // Print the number for the second part of each row
            }
        }

        printf("\n"); // Move to the next line after printing a row
    }

    return 0;
}
