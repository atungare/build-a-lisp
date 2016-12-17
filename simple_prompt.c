#include <stdio.h>

// 'static' means local to this file; '2048' characters
static char input[2048];

int main(int argc, char** argv) {
  puts("Lispy Version 0.0.0.0.1");
  puts("Press ctrl-c to Exit\n");

  while (1) {
    fputs("lispy> ", stdout);
    fgets(input, 2048, stdin);
    printf("No, you're a %s", input);
  }

  return 0;
}
