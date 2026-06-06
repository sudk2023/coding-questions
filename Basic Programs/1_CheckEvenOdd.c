/*
-       Check if the Number is Armstrong
-       Author                  :               Krishna Teja G S
-       Repository              :               github.com/packetprep/coding-questions
-       Website                 :               packetprep.com
*/

#include <stdio.h>

int main () {
    int number = 0;
    printf("Enter an integer\n");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("The number is Even\n");
    } else {
        printf("The number is Odd\n");
    }
}