#include <stdio.h>

void main(){
    int a;

    printf("enter marks: ");
    scanf("%d",&a);

    if(a>=90)
     printf("9 GP\n");
     
    else if (a>=80)
     printf("8 G.P\n");
    else if (a>=70)
     printf("7 G.P\n");
    else if (70>=a)
     printf("fail\n");
}