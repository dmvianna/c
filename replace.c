#include <stdio.h>

/* copy input to output, replacing multiple blanks to a single blank */

int main()
{
  int new, old;

  while ((new = getchar()) != EOF) {
    if (new == ' ' && old == ' ')
      continue;
    putchar(new);
    old = new;
  }
}
