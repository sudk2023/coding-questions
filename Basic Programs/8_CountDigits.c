/*
-       Check if the number is a Strong Number
-       Author                  :               Krishna Teja G S
-       Repository              :               github.com/packetprep/coding-questions
-       Website                 :               packetprep.com
*/

#include <stdio.h>

int main () {
    int number = 0;
    int lastDigit = 0;
    int count = 0;
    int sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    while (number != 0) {
        lastDigit = number % 10;
        count++;
        sum = sum + lastDigit;
        number = number/10;
    }

    printf("%d %d", count, sum);
} 