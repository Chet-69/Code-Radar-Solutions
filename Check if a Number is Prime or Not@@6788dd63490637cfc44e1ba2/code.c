#include<stdio.h>
int main() {
    int num;
    scanf("%d",&num);
    if(num<=0) {
        printf("Not Prime");
    } else{
        for(i=2;i<=num;i++){
            if(num%i==0){
                printf("Not Prime");
            } else {
                printf("Prime");
            }
        }
    }
}