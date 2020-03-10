#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void swap(int *a, int *b){
   *a = *a + *b - (*b = *a);
}

int main(){
   int one = 1;
   int two = 2;

   //This swaps the values of one and two by
   //taking advantage of how C evaluates 
   //code.  In C, we first evaluate the
   //right hand side, which means "one + two - (two = one)"
   //becomes "1 + 2 - (two = 1)".  We then evaluate the
   //assignment, which assigns the value of 1 to two and results
   //in "1 + 2 - 1".  This is then evaluated to be 2, which is
   //assigned to one. 
   one = one + two - (two = one);

   printf("%d, %d\n", one, two); 
}
