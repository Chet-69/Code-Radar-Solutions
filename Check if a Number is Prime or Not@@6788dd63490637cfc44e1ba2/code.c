#include<stdio.h>
int main() {
    int num,isprime=1;
    scanf("%d",&num);
    if(num<=1) {
        printf("Not Prime");
        return 0;
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
        printf("Not Prime");
    }
    return 0;
}

}