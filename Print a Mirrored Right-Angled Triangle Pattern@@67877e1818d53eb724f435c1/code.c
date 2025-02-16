#include<stdio.h>
int main() {
    int n;
    for(int i=0;i<n;i++){
        for(int j=n-i-1;j>=0;j--){
            printf("* ");
        }
        printf("\n");
    }
}