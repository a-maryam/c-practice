/*
 * File: ptr_str_reverse.c
 * Purpose: print a file backward using pointers, file is one of Norvig's giant palindromes
 * Author: aleena
 */

#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
int main() {
  FILE * fptr = fopen("norvig.txt", "rb");
  if (fptr==NULL) {
    printf("Error. Could not open file!");
    return -1;
  }
  fseek(fptr, -1L, SEEK_END);
  putc(fgetc(fptr), stdout);
  while(fseek(fptr,-2, SEEK_CUR)==0) {
    fputc(fgetc(fptr),stdout);
  }
  fclose(fptr);
  return(0);
}
  
  
