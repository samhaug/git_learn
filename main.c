#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv){

   int a[1000];
   FILE *ifl;
   if (argc != 2){
      printf("Need a file name\n");
      exit(0);
   }

   ifl = fopen(*(argv+1),"r");

   int i=0;
   while(!feof(ifl)){
      fscanf(ifl,"%d",a+i);
      i++;
   }

   for (int j=0;j<i;j++){
       printf("%d\n",a[j]);
   }

}

