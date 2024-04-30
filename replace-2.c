#include <stdio.h>

/* copy input to output, replacing multiple blanks to a single blank */

int main()
{
  int new;

  while ((new = getchar()) != EOF) {
    if (new == '\t')
      printf("\\t");
    else if (new == '\b')
      printf("\\b");
    else if (new == '\\')
      printf("\\\\");
    else putchar(new);
  }
}
