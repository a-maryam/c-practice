#include <stdio.h>
#include <stdlib.h>
typedef struct {
  char *name;
  int atomic_num;
} element;

int main() {
  element *one = (element *) malloc(sizeof(element));
  one->name = "Boron";
  one->atomic_num = 5;
  printf("%s", one-> name);
}
