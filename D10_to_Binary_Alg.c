#include <stdio.h>
#include <string.h>

int main() {
    int n;
    char binary[64] = "";  // Buffer for binary string
    char temp[2];          // Temporary buffer for each digit

    printf("Enter a decimal number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    while (n > 0) {
        if (n % 2 == 0) {
            strcpy(temp, "0");
        } else {
            strcpy(temp, "1");
        }

        // Prefix the digit to the current binary string
        char newBinary[64];
        strcpy(newBinary, temp);
        strcat(newBinary, binary);
        strcpy(binary, newBinary);

        // Divide by 2 (integer division)
        n = n / 2;
    }

    printf("Binary: %s\n", binary);
    return 0;
}