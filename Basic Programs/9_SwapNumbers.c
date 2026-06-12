#include <stdio.h>

void swap(int*, int*);

int main () {
    int a, b, temp;

    printf("Enter a first integer: ");
    scanf("%d", &a);

    printf("Enter a second integer: ");
    scanf("%d", &b);

    temp = a;
    a = b;
    b = temp;
    
    swap(&a, &b);

    a = a + b;
    b = a - b;
    a = a - b;
    
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    printf("The numbers after swap are %d & %d \n", a, b);
}

void swap(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}