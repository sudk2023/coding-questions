#include <stdio.h>
#include <math.h>

int Decimal2Binary(int);
int Binary2Decimal(int);

int main () {
    int number = 0;
    int binary = 0;
    int decimal = 0;

    printf("Enter the decimall number: ");
    scanf("%d", &number);

    binary = Decimal2Binary(number);

    printf("Enter the binary number: ");
    scanf("%d", &number);
    decimal = Binary2Decimal(number);
    
    printf("Binary to Decimal conversion of %d is %d\n", number, decimal);
}

int Decimal2Binary(int number) {
    int binary = 0;
    int i = 1;
    int remainder = 0;

    while (number != 0) {
        remainder = number % 2;
        number = number / 2;
        binary = binary + remainder*i;
        i = i * 10;
    }

    return binary;
}

int Binary2Decimal(int number) {
    int decimal = 0;
    int i = 0;
    int lastDigit;

    while ( number != 0) {
        lastDigit = number % 10;
        number = number/10;
        decimal = decimal + lastDigit * pow(2, i);
        i++;
    }

    return decimal;
}