#include<stdio.h> 

int main() 
{ 
   int a = 1; 
   char *x; 
   
   x = &a; 
   *(x+1) = 1;

   printf("%d\n",a);   
   return 0; 
}

