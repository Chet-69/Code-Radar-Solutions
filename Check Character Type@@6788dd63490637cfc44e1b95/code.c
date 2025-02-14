#include<stdio.h>
#include <ctype.h>
int main(){
    char a;
    scanf("%c",&a);
    char lower=tolower(a);
    if(lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u') {
        printf("Vowel");
    } else if (a >= '0' && a <= '9')
{
        printf("Digit");
    }else if (lower >= 'a' && lower <= 'z')
{
        printf("Consonant");
    } else{
        printf("Special Character");
    }
}