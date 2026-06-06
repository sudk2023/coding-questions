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
    int flag = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    for (i = 2; i <= number/2;i++) {
        flag = 1;
    }

    if (number == 1) {
        printf("The number is Neither Prime nor Composite\n");
    } else if (flag == 1) {
        printf("The number is Composite\n");
    } else {
        printf("The number is Prime\n");
    }
}