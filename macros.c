#include <stdio.h>
#include <stdlib.h>

#define CUBE(X) (X) * (X) * (X)
#define REM(x, y) (x)%(y)
#define LOGIC(x,y) (x)*(y) < 100? 1 : 0
//#define IDENT(x) PRAGMA(ident #x)
//#define PRAGMA(x) _Pragma(#x)
int main() {
  printf("cube of %d is %d\n",3, CUBE(3));
  printf("remainder of %d/%d is %d\n", 27, 4, REM(27, 4));
  printf("%d\n", LOGIC(5,4));

  #if defined(CUBE)
  printf("HELLO!\n");
  #endif

  #ifdef REM
  printf("REM defined\n");
  #endif
	      
}
