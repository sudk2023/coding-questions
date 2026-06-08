/*
+       Find the factorial of a number
+       Author                  :               Krishna Teja G S
+       Repository              :               github.com/packetprep/coding-questions
+       Website                 :               packetprep.com
*/

#include <stdio.h>

int findFactorial(int);

int main () {
    int number = 0;
    int factorial = 0;
    factorial = findFactorial(number);
    printf("%d", factorial);
}

int findFactorial(int n) {
    int i = 0;
    int factorial = 1;

    for (i = 1; i<= n;i++) {
        factorial = factorial * i;
    }

    return factorial;
}
