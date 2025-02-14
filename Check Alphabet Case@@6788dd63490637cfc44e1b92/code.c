#include<stdio.h>
int main() {
    char a;
    scanf("%c",&a);
    if('A'<=a && a<='Z') {
        printf("Uppercase");
    } else {
        printf("Lowercase");
    }
}