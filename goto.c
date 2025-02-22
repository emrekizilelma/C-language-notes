#include <stdio.h>

int main(void) {
  int i = 0;
  while (i < 20) {
    if (i == 5) {
      goto print;
    }
    
    i++;
  }
  print: printf("a");

  return 0;
}
