#include<stdio.h>

void main(){
    int i,j,a,r,Q;
    printf("enter a number to be reversed: ");
    scanf("%d",&a);

    Q=a;
    r=0
;
    while(Q != 0){
        j=Q%10;
         if(r==0){
           r=j;
         }
         else{
            r=r*10+j;
         }
        Q=Q/10;
    }
    printf("reversed number is: %d\n",r);
}