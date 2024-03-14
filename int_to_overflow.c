#include <stdio.h>
#include <limits.h>

int main()
{
  int i = 0;
  int j = (int)(float)i;
  //this while loop will increment i and j synonymously until i and j are no longer equal
  while (i == j) {
    i++;
    j = (int)(float)i;
    //printf("i=%d\nj=%d\n", i, j);
  }

  printf("i=%d\nj=%d\n", i, j);
}