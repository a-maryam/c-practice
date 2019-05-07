/*
 * File: ptr_str_reverse.c
 * Purpose: print a file backward using pointers, file is one of Norvig's giant palindromes
 * Author: aleena
 */
#define MAXLEN 1500
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
int main() {
  // idea: iterate through file until end. Then go back one and continually print.
  FILE * fptr = fopen("norvig.txt", "rb");
  char buffer[MAXLEN + 1];
  if (fptr==NULL) {
    printf("Error. Could not open file!");
    return -1;
  }
  //  putchar(fgetc(fptr));
  //while(fgets(buffer, MAXLEN, fptr)) {
  //}
  // should test and see what happens with SEEK_END (perhaps no need to get to end of file
  // myself
  //  while(fptr++!=NULL) {
  //}
  fseek(fptr, 01L, SEEK_END);
  fseek(fptr, -1L, SEEK_END);
  int c = strtol(fptr, 0, 2);
  printf(" %c", c);
  fseek(fptr,0, SEEK_CUR);
  while(fseek(fptr,-1, SEEK_CUR)==0) {
    //    fputc(fgetc(fptr),stdout);
    //   printf("Hello ");
    //    char c = fgetc(fptr);
    c = strtol( fptr, 0, 2);
    //putchar(c);
     printf(" %c", c);
    fseek(fptr,0, SEEK_CUR);
    
    //    fseek(fptr, 0L, SEEK_CUR); 
  }
  fclose(fptr);
  return 0;
}
  
  