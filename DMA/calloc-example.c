#include <stdio.h>
#include <stdlib.h>

int main() 
{
  int n, i, *p, sum = 0;

  printf("Enter number of elements: \n");
  scanf("%d", &n);

  p = (int*) calloc(n, sizeof(int));
  
  printf("Enter elements: \n");
  for(i = 0; i < n; ++i) {
    scanf("%d", (p + i));
    sum += *(p + i);
  }

  printf("Sum = %d", sum);
  free(p);
  return 0;
}

