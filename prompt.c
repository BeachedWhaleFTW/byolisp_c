#include <stdio.h>
#include <stdlib.h>

#include <editline/readline.h>

int main(int argc, char** argv) {

  /* print welcome info */
  puts("Welcome to BYOLISP_C");
  puts("Press Ctrl+c to Exit\n");

  /* it goes on and on my friend */
  while (1) {

    /* output prompt and get input. note: readline() allocates new memory */
    char* input = readline(">> ");

    /* add input to history */
    add_history(input);

    /* echo back to user. note: readline() strips \n so it is added */
    printf("%s\n", input);

    /* free input. note: readline() allocates new memory */
    free(input);
    
  }

  return 0;
}
