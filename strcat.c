/* File: strcat.c
 * Purpose: implement strcat
 * Author: Aleena Maryam
 * Date: May 5, 2019
 */
#include <stdlib.h>
#include <stdio.h>
char* mystrcat(char * s1, const char * s2);
int main() {
  char s[] = "Hello,";
  char s2[] = " heisenbug.";
  printf("%s", mystrcat(s,s2));
}

// returns a pointer that points to src appended to dest
char* mystrcat(char * s1, const char * s2) {
  char * ptr = s1;
  while(*ptr!='\0') {
    ptr++;
  }
  while(*s2!='\0') {
    *ptr = *s2;
    ptr++;
    s2++;
  }
  *ptr = '\0';
  return s1;
}

  
