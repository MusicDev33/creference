#include <stdio.h>
#include <stdlib.h>

// Pass in a pointer and increment the value of the pointer (but not the pointer itself)
void passByRef(char *value) {
  ++*value;
}

int main() {
  short age = 40;
  char name[7] = "test";
  passByRef(&(*name));

  // Compiler optimizes this away and makes these allocate to the stack
  char *str;
  str = (char *) malloc(15);
  str = (char *) realloc(str, 25);

  short *addr = &age;

  printf("%p\n", &age);

  // Show the result of incrementing letters in the name
  printf("%s\n", name);
  printf("%u\n", *(name + 1));

  printf("%p\n", &str);
  printf("%u", *addr);
}
