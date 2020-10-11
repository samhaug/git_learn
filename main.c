#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv){

   int a[1000];
   FILE *ifl;
   if (argc != 3){
      printf("Need a file name and number of lines\n");
      exit(0);
   }

   if (!(ifl = fopen(*(argv+1),"r"))){
      printf("error opening file\n");
   }

   int num = atoi(*(argv+2));
   int *b = malloc((num+1)*sizeof(int));
  

   int i=0;
   while(!feof(ifl)){
      fscanf(ifl,"%d",b+i);
      i++;
   }

   for (int j=0;j<i;j++){
       printf("%d\n",b[j]);
   }

}

