#include <stdio.h>

int main () {
    int number, i, sum = 0;

    printf("Enter a positiive integer\n");
    scanf("%d", &number);

    for (i = 1; i < number; i++) {
        if (number % i == 0) {
            sum = sum + i;
        }
    }

    if (sum == number)
        printf("The given number is a Perfectt number\n");
    else
        printf("The given number is not a Perfect number \n");
}