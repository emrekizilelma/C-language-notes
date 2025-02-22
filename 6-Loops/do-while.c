#include <stdio.h>
#include <math.h>

/*
 * do-while is called also "post-test loop"
 * first start then check
 *
 * do {
 *  commands;
 * }while(statements);
 *
 * */

int main(void) {
  int num = 0;
  do {
    printf("-> ");
    scanf("%d", &num);

    double root = sqrt((double)num);
    printf("%d -> %.2f\n", num, root);
  } while(num != 0);

  printf("Exiting...\n");

  return 0;

}
