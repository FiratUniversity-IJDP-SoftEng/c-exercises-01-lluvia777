#include <stdio.h>
int main() {
    printf("Please enter your age : ");
    int age;
    scanf("%d", &age);
    for( int i = 0; i < age; i++) {
        printf("Happy Birthday!\n");
    }
    return 0;
}
