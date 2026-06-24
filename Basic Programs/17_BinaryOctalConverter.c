#include <stdio.h>
#include <math.h>

int Binary2Decimal(int);
int Binary2Octal(int);

int main () {
    int number = 0;
    int octal = 0;
    
    printf("Enter the binary number: ");
    scanf("%d", &number);

    octal = Binary2Octal(number);
    printf("%d %d", number, octal);
}

int Binary2Octal(int number) {
    int octal = 0;
    int value = 0;
    int i = 1;
    int lastDigit = 0;

    while (number != 0) {
        lastDigit = number % 1000;
        value = Binary2Decimal(lastDigit);
        octal = octal + value * i;
        i = i * 10;
        number = number / 1000;
    }

    return octal;
}