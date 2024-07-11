#include <stdio.h>

// constants
#define AGE 18

int main(void) {
  int age = 0;
  age = 37;
  printf("%d\n", age);

  unsigned char j = 255;
  j = j + 10;
  printf("%u\n", j);

  // char size:: 1 bytes
  printf("char size:: %zu bytes\n", sizeof(char));
  // int size:: 4 bytes
  printf("int size:: %zu bytes\n", sizeof(int));
  // short size:: 2 bytes
  printf("short size:: %zu bytes\n", sizeof(short));
  // long size:: 8 bytes
  printf("long size:: %zu bytes\n", sizeof(long));
  // float size:: 4 bytes
  printf("float size:: %zu bytes\n", sizeof(float));
  // double size:: 8 bytes
  printf("double size:: %zu bytes\n", sizeof(double));
  // long double size:: 8 bytes
  printf("long double size:: %zu bytes\n", sizeof(long double));

  printf("constants:: %d\n", AGE);

  printf("\nHello World!");

  int num;
  printf("Enter an integer:");
  scanf("%d", &num);
  printf("You entered: %d\n", num);
  return 0;
}
