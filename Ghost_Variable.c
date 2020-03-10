#include <stdio.h>
#include <stdlib.h>

void f1(char *str){
   int l = 0;
   char *s = str;
   while( (l++)[s] != 0 );
}

void f2(){
   //Wait...these variables have not been initialized,
   //so they should contain junk, right?  Not necessarily.
   //If we call f1 before, it will initialize l and s with
   //valid values.  When the function returns, these local
   //variables are popped off the stack by adjusting the stack
   //bounds.  When f2 starts, it will allocate the same types
   //of variables in the same order, so the stack bound will 
   //end up where it was in f1.  Thus, it appears as if the 
   //variables in f1 have ghosted into this function.
   int i;
   char *a;
   printf("%d %s\n", i, a);
}

void main(){
   char ptr[] = "hello";
   f1(ptr);
   f2();
}
