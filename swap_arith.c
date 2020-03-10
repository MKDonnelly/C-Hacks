#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void swap(int *a, int *b){
   *a = *a + *b - (*b = *a);
}

int main(){
   int one = 1;
   int two = 2;

   //swap two values
   one = one + two - (two = one);

   printf("%d, %d\n", one, two); 
}
