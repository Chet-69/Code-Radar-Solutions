#include<stdio.h>
int main() {
    int num,isprime=1;
    scanf("%d",&num);
    if(num<=1) {
        printf("Not Prime");
    } else{
        for(int i=2;i*i<=num;i++){
            if(num%i==0){
                isprime=0;
                break;
        }
    }
    if(isprime){
        print("Prime");
    } else{
        print("Not Prime")
    }
}

}