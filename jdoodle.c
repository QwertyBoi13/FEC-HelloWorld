#include <stdio.h>
#include <string.h>

int main(void) {
  printf("Hello World\n");
  printf("Code by Levi Leichtfuss\n");
  printf("What is your first name? \n");
  char name[100];
  scanf("%s", name);
  printf("Hello %s\n", name);
  printf("Your first name has %d characters", strlen(name));
  return 0;
}