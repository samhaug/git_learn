#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char **argv){
   int *i;
   void *v1,*v2;
   int *a = (int*)v1;

   size_t b = sizeof(void*);
   
   printf("void 1: %p\n",(int*)v1);
   printf("void 2: %p\n",(int*)v2);
   printf("void 1: %p\n",(double*)v1);
   printf("void 2: %p\n",(double*)v2);
   printf("a: %d\n",a);
   printf("size of void: %p\n",b);
   i = malloc(40*sizeof(int));
   printf("%x\n",i);
   printf("%o\n",i);
   printf("%d\n",i);
   printf("Hello World\n");
   printf("%s\n",*(argv+1));
   
}



