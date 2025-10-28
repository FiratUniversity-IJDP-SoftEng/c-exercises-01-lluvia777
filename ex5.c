#include <stdio.h>
 void sayHello(char *name)
 {
    printf("Hello, %s!\n",name);
 }
 int main(){
    printf("Please enter your name : ");
    char userName[40];
    scanf("%s",userName);
    sayHello(userName);
    return 0;
 }
