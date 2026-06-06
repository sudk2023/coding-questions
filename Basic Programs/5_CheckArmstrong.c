/*
-       Check if the Number is Armstrong
-       Author                  :               Krishna Teja G S
-       Repository              :               github.com/packetprep/coding-questions
-       Website                 :               packetprep.com
*/

#include <stdio.h>
#include <math.h>

int main () {
    int number = 0;
    int lastDigit = 0;
    int originalNumber = 0;
    int sum = 0;
    int power = 0;

    printf("Enter a positive integer: ");

    scanf("%d", &number);

    originalNumber = number;
    
    while (number != 0) {
        number = number/10;
        power++;
    }

    number = originalNumber;

    while (number != 0) {
        lastDigit = number % 10;
        sum = sum + pow(lastDigit, power);

        number = number/10;
    }
    if (originalNumber == sum) {
        printf("The given number is a Armstrong\n");
    } else {
        printf("The given number is not a Armstrong \n");
    }
}