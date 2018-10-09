#include <stdio.h>

void print_integers(int int_value, int* int_pointer){
  printf("Got an integer value %d and an address to an integer with value %p\n",int_value, (void*)int_pointer);
}

int main(int argc, char const *argv[]) {
  int int_value;
  int* int_pointer;

  int_value = 2;
  int_pointer = &int_value;

  print_integers(int_value, int_pointer);
  return 0;
}
