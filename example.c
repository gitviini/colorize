#include "colorize.h"
#include <stdio.h>

int main() {
  char text[20];

  printf("escreva algo: ");
  scanf("%s", text);

  colorize(text);

  return 0;
}
