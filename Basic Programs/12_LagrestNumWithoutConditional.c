#include <stdio.h>

int findMax(int, int);

int main () {
    int a = 0;
    int b = 0;
    int c = 0;
    int max = 0;

    printf("Enter a first integer: ");
    scanf("%d", &a);

    printf("Enter a second integer: ");
    scanf("%d", &b);

    max = findMax(a, b);

    printf("%d\n", max);
}

int findMax(int x, int y) {
    int z = x - y;

    int i = (z >> 31) & 0x1;
    int max = x - i * z;

    return max;
}