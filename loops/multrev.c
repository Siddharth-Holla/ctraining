#include <stdio.h>
int main() {
    int i;
    int n;
    int a;
    
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i = n; i >= 1; i--) {
        a=i*n;
        printf("%d * %d = %d\n", i, n, a);

    }
    return 0;
}
    
