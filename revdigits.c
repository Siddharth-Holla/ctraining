#include <stdio.h>
void revdigits(int n){
    if(n==0){
        return ;
    }
    printf("%d", n%10);
    revdigits(n/10);
}   
int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    revdigits(n);
    return 0;
}
