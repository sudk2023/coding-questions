/*
-       Check if the Number is Armstrong
-       Author                  :               Krishna Teja G S
-       Repository              :               github.com/packetprep/coding-questions
-       Website                 :               packetprep.com
*/

#include <stdio.h>

int main () {
    int number = 0;
    int lastDigit = 0;
    int originalNumber = 0;
    int reverseNumber = 0;

    printf("Enter a positive integer\n");
    scanf("%d", &number);
    originalNumber = number;

    while (number != 0) {
        lastDigit = number % 10;
        reverseNumber = reverseNumber*10 + lastDigit;
        number = number/10;
    }

    if (originalNumber == reverseNumber) {
        printf("The given number is a Palindrome\n");
    } else {
        printf("The given number is not a Palidrome\n");
    }
}
