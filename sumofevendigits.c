#include <stdio.h>
void main(){
    int a;
    int i;
    int sum;
    printf("enter a number:");
    scanf("%d",&a);
    sum=0;
    while(a>0){
        i=a%10;
        if(i%2==0){
            sum=sum+i;
        }
        a=a/10;
    }
    printf("sum of even digits is:%d",sum);
}