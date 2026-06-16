#include <stdio.h>
int fibon(int n){
    if(n==0){
        return 0;
        }
    if(n==1){
        return 1;
        }
    return fibon(n-1)+fibon(n-2);
}
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("%d", fibon(n));
    return 0;
}