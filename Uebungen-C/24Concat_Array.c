#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char * prompt(const char *);

int main(void) {
  char * concat, * s1, * s2;
  unsigned length;

  s1 = prompt("s1: ");
  s2 = prompt("s2: ");

  concat = malloc(length = strlen(s1) + strlen(s2) + 1);

  strlen(s2) > strlen(s1)
    ? snprintf(concat, length, "%s%s", s2, s1)
    : snprintf(concat, length, "%s%s", s1, s2);

  free(s1);
  free(s2);

  puts(concat);
  free(concat);

  return EXIT_SUCCESS;
}

char * prompt(const char * prompt) {
  unsigned size = 2, length = 0;
  char * buf = calloc(size, sizeof(char)), c;

  fputs(prompt, stdout);

  while((c = fgetc(stdin)) != '\n' && !feof(stdin)) {
    buf[length++] = c;

    if(length >= size)
      buf = realloc(buf, sizeof(char) * (size *= 2));

    buf[length] = 0;
  }

  buf = realloc(buf, length + 1);

  return buf;
}
