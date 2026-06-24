#include <stdio.h>

int main () {
    int a = 0;
    int b = 0;
    int multiple = 0;
    int lcm = 0;

    printf("Enter the two numbers: ");
    scanf("%d %d", &a, &b);
    
    while (1) {
        if (multiple % a == 0 && multiple % b == 0) {
            lcm = multiple;
            break;
        }
    }
}