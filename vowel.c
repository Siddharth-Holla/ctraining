#include <stdio.h>
int countVowel(char ch){
     if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' 
       )
        return 1;
    else
        return 0;
}

int main(){
    char ch;
    scanf("%s",&ch);
    if(countVowel(ch)){
        printf("has vowel");
    }
    else{
        printf("does not have");
    }
}