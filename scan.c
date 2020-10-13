#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

#define NUM 50000

int main(int argc, char **argv){

   char s[80];
   printf("Enter a command:\n");
   scanf("%s",s);
   if (strcmp(s,"Quit") == 0){
       printf("Quitting:\n");
       exit(0);
   }
   else{
       printf("Still done\n");
   }

}
