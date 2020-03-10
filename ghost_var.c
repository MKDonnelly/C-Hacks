#include <stdio.h>
#include <stdlib.h>

void f1(char *str){
   int l = 0;
   char *s = str;
   while( (l++)[s] != 0 );
}

void f2(){
   int i;
   char *a;
   printf("%d %s\n", i, a);
}

void main(){
   char ptr[] = "hello";
   f1(ptr);
   f2();
}
