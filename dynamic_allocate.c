#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv){

   int *a = (int*)malloc(1000000*sizeof(int));
   for (int i=0;i<1000000;i++){
      a[i] = i;
   } 

}

