#include <stdio.h>
int main()
{  
  int a = 1;
  int b = (1,2,3);

  printf("%d\n", a+=(a+= 3, 5, a));

  printf("%d\n", b);
  return 0;
}

