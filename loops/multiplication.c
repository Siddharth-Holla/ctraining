#include <stdio.h>

void main() {
    int i,j,c;

    printf("enter value to be multiplied \n");
    scanf("%d",&j);

    for (i=1;i<=10;i++) {
        c=i*j;
        printf("%d ",c);
    }
}
