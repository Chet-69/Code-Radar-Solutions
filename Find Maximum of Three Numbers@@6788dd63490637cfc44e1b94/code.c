#include<stdio.h>
int main() {
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    int max=a;
    if(b>max){
        max=b;
    } else{
        max=c;
    }
    printf("%d",max);
}