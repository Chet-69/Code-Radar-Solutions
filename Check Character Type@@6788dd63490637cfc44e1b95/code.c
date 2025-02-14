#include<stdio.h>
#include <ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    char lower=tolower(a);
    if(lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u') {
        printf("Vowel");
    } else if(char=='1' || char=='2' || char=='3' || char=='4' || char=='5' || char=='6' || char=='7' || char=='8' || char=='9' || char=='0'){
        printf("Digit");
    } else if('a'<=lower<='z' &&(lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u') ){
        printf("Consonant");
    } else{
        printf("Special Character");
    }
}