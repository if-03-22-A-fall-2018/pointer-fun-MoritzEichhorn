/*----------------------------------------------------------
 *				HTBLA-Leonding / Class: 2 AHIF
 * ---------------------------------------------------------
 * Exercise Number: 4
 * Title:			Pointer Fun
 * Author:			Moritz Eichhorn
 * ----------------------------------------------------------
 * Description:
 * Assigsns values to an integer and to a pointer to an integer.
 * Then prints the values, then changes the vaues and then prints
 * them again.
 * ----------------------------------------------------------
 */

#include <stdio.h>

void print_integers(int int_value, int* int_pointer){
  printf("Got an integer value %d and an address to an integer with value %p\n",int_value, (void*)int_pointer);
}

void change_integers(int int_value, int* int_pointer){
  int_value = 3;
  int_pointer = &int_value;
}

int main(int argc, char const *argv[]) {
  int int_value;
  int* int_pointer;

  int_value = 2;
  int_pointer = &int_value;

  print_integers(int_value, int_pointer);
  change_integers(int_value, int_pointer); //nothing will change because the function is call by value, if I want to change the value I would have to to call the functoin by reference
  print_integers(int_value, int_pointer);
  return 0;
}
