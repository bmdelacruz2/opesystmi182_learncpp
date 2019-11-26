#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ncurses.h>
void main()
{
  float farenheit, celsius;

  printf("Enter degree in farenheit\n");
  scanf("%f", &farenheit);

  celsius=(float)5/9*(farenheit-32);
  printf("result=%f\n", celsius);
  getch();
}
