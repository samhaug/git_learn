#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define NUM 50000

int main(int argc, char **argv){

   clock_t start,end;
   start = clock();
   char string[] = "Sound of Music";
   double cpu_time_used;
   int *a[NUM];

   
   for (int i=0;i<NUM;i++){
      int j = 10;
      *(a+i) = malloc(sizeof(int));
      **(a+i) = i;
    
   }
   end = clock();
   cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
   printf("Time (s): %8.8f\n",cpu_time_used);

}
