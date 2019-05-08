#include <stdio.h>

int main(int argc, char * argv[]) { // argv is array of string ptrs
  for(int i = argc-1; i!=0; i--) {
    printf("%s ", argv[i]);
  }
}// first thing in argv is name of program exec
