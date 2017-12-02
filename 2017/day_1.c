#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int input, sum;
  char prev;
  sum = 0;
  
  prev = 'n';
  // Sum = 3
  input = 1122;

  // TODO: malloc this - malloc(sizeof(char)*(int)log10(num))
  char buff[100];
  sprintf(buff, "%d", input);

  for (int i = 0; buff[i] != '\0'; i++) {
    if (buff[i] == prev) {
      int p = atoi(prev);
      printf("%d!", p);
      sum = sum + buff[i];
    }
    // If first int or previous int doesn't match
    if (prev == 'n' || prev != buff[i]) {
       prev = buff[i];
    }
  }
  printf("Sum equals: %d\n", sum);

  return(0);
}
