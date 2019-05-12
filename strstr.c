#include <stdio.h>
int strStr(char * haystack, char * needle)
int main() {
}



int strStr(char * haystack, char * needle){
    if(*haystack=='\0') {
        return 0;
    }
    char * str2 = needle;
    char * begin = haystack;
    char * start = NULL;
    while(haystack!='\0') {
        if(*haystack == *needle) {
            if(start==NULL) {
                start = haystack;
            }
        }
        else {
            start = NULL;
        }
        haystack++;
        needle++;
        if(*needle == '\0') {
             if(start != NULL) {
                 return start - begin;
             }
            needle = str2;
        }
    }
    if(start!=NULL) {
        return start - begin;
    }
    else {
        return -1;
    }
}

