#include<stdio.h>
#include <ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    char lower=tolower(a);
    if(lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u') {
        printf("Vowel");
    } else if(lower=='1' || lower=='2' || lower=='3' || lower=='4' || lower=='5' || lower=='6' || lower=='7' || lower=='8' || lower=='9' || lower=='0'){
        printf("Digit");
    } else if('a'<=lower<='z' &&(lower!='a' || lower!='e' || lower!='i' || lower!='o' || lower!='u') ){
        printf("Consonant");
    } else{
        printf("Special Character");
    }
}