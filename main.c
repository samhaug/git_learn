#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv){
   int *i;
   
   i = malloc(40*sizeof(int));
   printf("%x\n",i);
   printf("%o\n",i);
   printf("%d\n",i);
   
   printf("Hello World\n");
   printf("%s\n",*(argv+1));
   
}
