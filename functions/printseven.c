#include <stdio.h>

int iseven(int n){ 
    
        return (n%2==0);

}   
void printseven(int limit) {  
    int i;  
    for (int i = 1; i <= limit; i++) {
        if (iseven(i)) {
            printf("%d ", i);
        }
 
   }
}
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printseven(num);
    return 0;
}