#include <stdio.h>

void main(){
    int N;
    int i;
 printf ("Enter a number: ");
    scanf("%d", &N);

for (i = 1; i <= N; i++) {
    if (i % 3 == 0 || i % 5 == 0) {
        printf("%d ", i);
    }
}
}