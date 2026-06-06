#include <stdio.h>

int main () {
    int number, i , flag = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &number);
    
    for (i = 2; i <= number/2;i++) {
        flag = 1;
    }

    if (number == 1) {
        printf("The number is Neither Prime nor Composite\n");
    } else if (flag == 1) {
        printf("The numbmer is Composite\n");
    } else {
        printf("The number is Prime\n");
    }
}