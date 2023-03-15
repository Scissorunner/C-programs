#include <stdio.h>

// Add do-while loop to this. Include menu 3 option to quit

  int main() {
    int menu;
    char ch;
    int num;

    printf("\n Please select (1 or 2): \n");
    printf("1. Find equivalent ASCII character from ASCII value (0 to 127): \n");
    printf("2. Find equivalent ASCII value from ASCII character: \n");
    printf("--> ");
    scanf("%d", &menu);
    scanf("%c", &ch); // adding this solved the newline problem

    if (menu == 1) {
      printf("1. Enter a ASCII value(0 to 255): ");
      scanf("%d", &num);
      printf("Equivalent character: '%c' \n", num);
    }
    else if (menu == 2) {
      printf("Enter a character: \n");
      scanf("%c", &ch); // sees a newline character here and doesn't allow entry
      printf("Equivalent value: %d \n", ch);
    }
    else {
      printf("wrong choice \n");
    }
   
  return 0;

  }