#include <stdio.h>

static char input[2048];

int main(int argc, char** argv) {

    puts("Welcome to LISPY");
    puts("Press Ctrl+c to Exit\n");
  
  while (1) {

    fputs(">> ", stdout);

    fgets(input, 2048, stdin);

    printf("%s", input);
  }

  return 0;
}
