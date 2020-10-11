#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv){
   int i;
   FILE *ifl;
   i=40;
   
   printf("%x\n",i);
   printf("%o\n",i);
   printf("%d\n",i);
   
   printf("Hello World\n");
   printf("%s\n",*(argv+1));
   
}
