#include <stdio.h>

int main () {
    int a = 0;
    int b = 0;
    int i = 0;
    int gcd = 0;

    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);

    for (i = 1; i <= a && i <= b;i++) {
        if (a % i == 0 && b % i == 0) {
            gcd = i;
        }
    }

    printf("The GCD of %d and %d is %d \n", a, b, gcd);
}