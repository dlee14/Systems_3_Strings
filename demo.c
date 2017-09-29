#include <stdio.h>
#include <string.h>

int main() {
  char one[20];
  char two[100];
  char three[16];
  char four[9];

  printf("address of \"This is a demo.\": %p\n\n", "This is a demo.");
  strcpy(one, "This is a demo.");
  printf("one[]: %s\n", one);
  printf("address of one: %p\n\n", one);
  strcpy(two, one);
  printf("two: %s\n", two);
  printf("address of two: %p\n\n", two);
  strcpy(three, two);
  printf("three: %s\n", three);
  printf("address of three: %p\n\n", three);

  //try changing 3 to 4
  strncpy(four, "This is a demo.", 8);
  printf("four[]: %s\n", four);
  printf("address of four: %p\n\n", four);
}
