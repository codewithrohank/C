#include <stdio.h>
int main()
{  
  int a = 1;

  printf("%d", a+=(a+= 3, 5, a));

  return 0;
}

