#include <stdio.h>
#include <math.h>

int *a;

void f();
int main(){
   int j=30;
    
   printf("Hello World\n");
   printf("%d\n",j);

   for (int i=0;i<10;i++){
       printf("%d\n",i);
   }
   printf("This is the second new branch\n");
   f();
}

void f(){
    a = malloc(sizeof(int));
    printf("global %d\n",a);
}
