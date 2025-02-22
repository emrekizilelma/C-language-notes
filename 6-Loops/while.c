#include <stdio.h>

/*
 *  while loop is also called as "pre-test loop" 
 *  first check then start the loop
 *
 *  while (statements) {
 *      command;
 *      ...;
 *
 *    n++;
 *  }
 */

int main(void) {
  int i = 0, n = 10;

  while(i<=n) {
    printf("%d-> %d\n", i, i * i);
    i++;
  }
  return 0;
}
