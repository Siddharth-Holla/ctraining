#include <stdio.h>
int ispositive(int n){
    if (n%2==0){
        return 1;
    }
    else {
        return 0;}
}
int main(){

    int x;
    scanf("%d",&x);
    if (isEven(x))
       printf("even");
    else
       printf("odd");
    return 0;
}