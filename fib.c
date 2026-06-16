#include <stdio.h>
void main(){    
    int N;
    printf ("Enter a number: ");
    scanf("%d", &N);
    int i;;
    int p0=0;
    int p1=1;
    printf("%d\n", p0);
    printf("%d\n", p1);

    for (i = 2 ; i < N; i++) {
        int sum=p0+p1;
        p0=p1;
        p1=sum;
        printf("%d\n", sum);
}
}