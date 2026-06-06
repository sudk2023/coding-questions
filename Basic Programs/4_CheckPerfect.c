/*
-       Check if the Number is Armstrong
-       Author                  :               Krishna Teja G S
-       Repository              :               github.com/packetprep/coding-questions
-       Website                 :               packetprep.com
*/

#include <stdio.h>

int main () {
    int number = 0;
    int i = 0;
    int sum = 0;

    printf("Enter a positive integer\n");
    scanf("%d", &number);

    for (i = 1; i < number; i++) {
        if (number % i == 0) {
            sum = sum + 1;
        }
    }

    if (sum == number) {
        printf("The given number is a Perfect number\n");
    } else {
        printf("The given number is not a Perfect number\n");
    }

}