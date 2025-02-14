#include<stdio.h>
int main(){
    char a;
    scanf("%d",&a);
    char lower=tolower(a);
    if(lower=='a' || lower=='e' || lower=='i' || lower=='o' || lower=='u') {
        printf("Vowel");
    } else{
        printf("Consonant");
    }
}