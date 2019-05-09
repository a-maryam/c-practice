
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
  char * color;
  color = (char *) malloc (23 * sizeof(char));
  char * s = "Purple Violets";
  strcpy(color, s);
  printf("%s", color);
  free(color);
}
