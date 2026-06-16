#include <stdio.h>
void main(){    
    int N;
    printf ("Enter a number: ");
    scanf("%d", &N);
    int i;
    if (N % 2 == 0) {
        printf("not a prime");
    }
    else {
        for (i = 3; i < N/2; i++) {
            if (N % i == 0) {
                printf("not a prime");
                break;
            }
            printf("prime");
            
        }
    }
}