#include <stdio.h>

void main() {
    int ch;
    do{
    printf("1.display 2.push 3.pop 4.exit\n");
    scanf("%d",&ch);

    switch(ch) {
        case 1:
            printf("display\n");
            break;
       case 2:
            printf("push\n");
            break;
        case 3:
            printf("pop\n");
            break;
        case 4:
            printf("exit\n");
            break;
        default:
            printf("invalid choice\n");
    }
    }
    while (ch!=4);

}   