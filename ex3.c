#include <stdio.h>
#include <string.h>
int main() {
    char pet [10];
    printf("Do you have cat or dog? : ");
    scanf("%s",pet);
    if (strcmp(pet,"cat") == 0){
        printf("MİYAVVVV\n");
    } else if (strcmp(pet,"dog") ==0){
        printf("HAV HAVVVV\n");
    }else
    {
        printf("I don't know that animal sound.\n");
    }
    
    return 0;
    }



