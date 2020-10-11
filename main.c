#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv){

   char *titles[] = {"A tale of two cities", "Moby Dick"};
   printf("%s\n",*titles);
   printf("%s\n",*(titles+1));

   int vector[] = {234, 543, 32, 54};
   int *p = vector;

   for (int i=0;i<4;i++){
      printf("vec: %x %d\n",p,*p);
      p++;
   }
}

