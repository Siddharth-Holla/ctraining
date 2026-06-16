#include <stdio.h>

int getlargest(int a, int b, int c){
    if(a>b && a>c){
        return a;
    }
    if (b>a && b>c){
        return b;
    }
    if (c>a && c>b){
        return c;
    }
}
int main(){
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("The largest number is %d", getlargest(a, b, c));
    return 0;
}