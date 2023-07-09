#include <stdio.h>
#include <stdlib.h>

void doTask(char *value) {
  ++*value;
}

int main() {
  short age = 40;
  char name[7] = "test";
  doTask(&(*name));
  char *str;
  str = (char *) malloc(15);
  str = (char *) realloc(str, 25);

  short *addr = &age;

  printf("%p\n", &age);
  printf("%s\n", name);
  printf("%u\n", *(name + 1));
  printf("%p\n", &str);
  printf("%u", *addr);
}
