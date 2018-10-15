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
  printf("Got an integer value %d and an address to an integer with value %d\n",int_value, *int_pointer);
}

void change_integers(int int_value, int* int_pointer){
  int_value = 3;
  *int_pointer = 4;
}

int main(int argc, char const *argv[]) {
  int int_value;
  int* int_pointer;

  int_value = 2;
  int_pointer = &int_value;

  print_integers(int_value, int_pointer);
  change_integers(int_value, int_pointer);  // es ändern sich beide Werte auf 4, weil in "change_integers" der Wert, der dort gespeichert ist wo der pointer hinzeigt, geändert wird. Der Wert int_value wird daher in der main auch auf 4 geändert. Das zuweisen von 3 in change_integers macht genau gar nichts, weil int_value nicht per Reference übergeben wird.
  print_integers(int_value, int_pointer);
  return 0;
}
