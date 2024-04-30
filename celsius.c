#include <stdio.h>

/* print Fahrenheit-Celcius table
   for fahr = 0, 20, ..., 300 */

int main()
{
  float fahr, celsius;
  float lower, upper, step;

  printf(" °C   °F\n");
  
  lower = -50;                  /* lower limit of temperature scale */
  upper = 100;                  /* upper limit */
  step = 10;                    /* step size */
  celsius = lower;
  while (celsius <= upper) {
    fahr = (9.0/5.0) * celsius + 32;
    printf("%3.0f  %3.0f\n", celsius, fahr);
    celsius = celsius + step;
               
  }
}
