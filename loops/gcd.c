#include <stdio.h>

int main() {
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    int B, S, c;

    if (a > b) {
        B = a;
        S = b;
    } else {
        B = b;
        S = a;
    }

    while (S != 0) {
        c = B % S;
        B = S;
        S = c;
    }

    printf("GCD is %d\n", B);

    return 0;
}