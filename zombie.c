// https://www.includehelp.com/c-programs/zombie-process.aspx
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main() {
  int pid = fork(); // creates process identical to parent
  // this must be where forkbomb comes from!
  // pid > 0, then it is the parent
  // pid == 0, then child
  // pid == -1 if child did not fork
  if(pid > 0) sleep(20);
  else {
    exit(0);
  }
  return 0;
}
