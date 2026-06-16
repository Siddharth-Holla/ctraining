#include <stdio.h>

void main(){
    int i,n,a;
    printf("enter a number:");
    scanf("%d",&n);

    for (i=0;i<n;i++)
    {
       a=i%2;
       if(a==0){
          printf("%d\n",i);
          }
       else{
         printf("");
    }
}
}