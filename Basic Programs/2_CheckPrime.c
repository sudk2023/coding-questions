#include <stdio.h>

int main () {
    int number, i, flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);

    for (i = 2; i<= number/2;i++) {
        if (number % i == 0) {
            flag = 1;
        }
    }

    if (number == 1) {
        printf("The nuumber is Neither Prime nor Composite\n");
    } else if (flag == 1) {
        printf("The number is Composite\n");
    } else {
        printf("The number is Prime\n");
    }

}