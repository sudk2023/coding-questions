#include <stdio.h>

int main () {
    int number = 0;
    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0) {
        printf("The number is Even\n");
    } else {
        printf("The number is Odd\n");
    }
}