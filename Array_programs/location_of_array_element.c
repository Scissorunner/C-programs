/*
Program takes user input to create a character array or a numerical arry. After array
is created the program asks user which array item they would like to search for. Program
searches the created array and if found returns item postion within the array. If item
is not found the program returns message 'not found'.
*/

// ToDo:  Add an option for a string array
//        Create a do-while loop
//        Add a menu where array option can be choosen or 'Q' to quit         

#include <stdio.h>
#include <string.h>

int main() {
	int item, num, i, pos = -1;
  char arrayName[10], menu, citem;
  
  printf("\nDo you want to create a character array or a numerical array? (Enter 'C' or 'N') ");
  scanf("%c", &menu);
  if (menu == 'C') {
    printf("\nEnter the name of your array: ");
    scanf("%s", arrayName); // do not add & before 'arrayName'

    printf("\nEnter the number of elements in your array: ");
	  scanf("%d", &num);

    char charList[num];
	  printf("Enter %d character array elements: \n", num);
	  for (i = 0; i < num; i++) {
		printf("-> ");
    scanf(" %c", &charList[i]);
	  }

    printf("Enter the element to be searched: ");
	  scanf(" %c", &citem);
	  for (i = 0; i < num; i++) {
		  if (charList[i] == citem)
		    pos = i;
	  }
	  if (pos == -1) {
		  printf("\n%c is not present in this array.\n", citem);
    }
	  else {
		  printf("\n%c is present at %s[%d]\n", citem, arrayName, pos);
    }
  }

  else if (menu == 'N') {
    printf("\nEnter the name of your array: ");
    scanf("%s", arrayName); // do not add & before 'arrayName'

	  printf("\nEnter the number of elements in your array: ");
	  scanf("%d", &num);

	  int list[num];
	  printf("Enter %d numerical array elements: \n", num);
	  for (i = 0; i < num; i++) {
		printf("-> ");
    scanf("%d", &list[i]);
	  }
	
    printf("Enter the element to be searched: ");
	  scanf("%d", &item);
	  for (i = 0; i < num; i++) {
		  if (list[i] == item) {
		    pos = i;
      }
	  }
  
    if (pos == -1) {
		  printf("\n%d is not present in this array.\n", item);
    }
	  else {
		  printf("\n%d is present at %s[%d]\n", item, arrayName, pos);
    }
  }

  else {
    printf("Not a valid entry\n");
  }
  
  return 0;
}