#include <stdio.h>
int main() {
 int magic_number = 3;
 int guess;
 printf("Please enter a number between 1 and 5 : ");
   scanf("%d", &guess);
   if (guess == magic_number) {
    printf("You guessed it!\n");
   } else {
    printf("Sorry, u couldn't guess it\n");
   }
  return 0;
}
