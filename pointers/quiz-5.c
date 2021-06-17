#include<stdio.h>

int main() 
{ 
   int a = 65; 
   char *x; 
   
   x = &a; 
   *(x+1) = ++a;

   printf("%c\n",a);
   return 0; 
}

