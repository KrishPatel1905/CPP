#include <stdio.h>
#include <math.h>

int main() {
    long long binary;
    int octal = 0, decimal = 0, i = 0;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    while (binary != 0) {
        decimal += (binary % 10) * pow(2, i);
        binary /= 10;
        i++;
    }

    i = 1;
    while (decimal != 0) {
        octal += (decimal % 8) * i;
        decimal /= 8;
        i *= 10;
    }

    printf("Octal number: %d\n", octal);

    return 0;
}
