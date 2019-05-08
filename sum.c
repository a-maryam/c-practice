#include <stdio.h>
#include <stdlib.h>
int main(int argc, char * argv[]) {
  int i, sum =0;
  for(i = argc-1; i!=0; i--) {
    sum+=atoi(argv[i]);
  }
  printf("Sum of command line arguments is %d", sum);
}
