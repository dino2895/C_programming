#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 8

int main()
{
  char a[99];
  gets(a);
  char *planets[] = {"Mercury", "Venus", "Earth",
                     "Mars", "Jupiter", "Saturn",
                     "Uranus", "Neptune"};
  int  j;

  //for (i = 1; i < argc; i++) {
  for (j = 0; j < NUM_PLANETS; j++)
	if (strcmp(a, planets[j]) == 0) {
        printf("%s is a planet.\n", a);
        break;
      }
    if (j == NUM_PLANETS)
      printf("%s is not a planet.\n", a);

  return 0;
}