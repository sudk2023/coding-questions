#include <stdio.h>

int main () {
    int number = 0;
    int i = 0;
    int first = 0;
    int second = 1;
    int third = 0;

    printf("Enter the number of terms : ");
    scanf("%d", &number);

    for (i = 1; i <= number; i++) {
        printf("%d \t", first);
        third = first + second;
        first = second;
        second = third;
        
    }   
}