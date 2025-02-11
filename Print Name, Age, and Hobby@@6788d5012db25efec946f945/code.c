#include <stdio.h>
int main() {
     char[100] name;
     int age;
     char[100] hobby;

     scanf("%c",name);
     scanf("%d",&age);
     scanf("%d",hobby);

     printf("Name: %c\n", name);
     printf("Age: %d\n", age);
     printf("Hobby: %c", hobby);
}