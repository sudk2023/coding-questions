/*
-       Check if the number is a Strong Number
-       Author                  :               Krishna Teja G S
-       Repository              :               github.com/packetprep/coding-questions
-       Website                 :               packetprep.com
*/

#include <stdio.h>
int findFactorial(int);

int main () {
    int number = 0;
    int lastDigit = 0;
    int originalNumber = 0;
    int sum = 0;
    int factorial = 0;

    scanf("%d", &number);

    originalNumber = number;

    while (number != 0) {
        lastDigit = number % 10;
        factorial = findFactorial(lastDigit);
        sum = sum + factorial;
        number = number / 10;
    }

    if (sum == originalNumber)
        printf("strong");
    else
        printf("not strong");
}

int findFactorial(int n) {
    int i = 0;
    int factorial = 1;

    for (i = 1; i<= n ; i++) {
        factorial = factorial * i;
    }

    return factorial;
}