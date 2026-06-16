#include <stdio.h>

void main(){
    int i;
    int sum;
    int a;

    printf("Enter a number: ");
    scanf("%d",&a);
    sum=0;
    i=0;
    while(i<=a){
        sum=sum+i ;
        i++;
    }
    printf("sum of all numbers till %d is:%d\n",a,sum);
}