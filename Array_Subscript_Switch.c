#include <stdio.h>
#include <stdlib.h>


void main(){

   char c[] = "hello";

   int i = 0;

   //To any C programmer, this will look obviously wrong.
   //Surely you really meant c[i]!
   //But, actually, this is perfectly valid.
   //Behind the scenes, the expression i[c] is turned into
   // *(i + c), which is exactly the same as turning c[i]
   // into *(c + i).
   while( i[c] != 0 ){
      printf("%c\n", i[c]);
      i++;
   }
}
