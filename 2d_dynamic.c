#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int** allocate(int rows, int cols);
void free_array(int **x,int rows);
void func(int **array, int rows, int cols);

void func(int** array, int rows, int cols){
  for (int i=0; i<rows; i++){
    for (int j=0; j<cols; j++){
      array[i][j] = i*j;
    }
  }
}

int** allocate(int rows, int cols){
  int **x;
  x = malloc(rows * sizeof(*x));
  for (int i=0; i<rows; i++){
    x[i] = malloc(cols * sizeof(*x[i]));
  }
  return x;
}

void free_array(int **x,int rows){
  for (int i=0; i<rows; i++){
    free(x[i]);
  }
  free(x);
}


int main(int argc, char **argv){
  int rows, cols, i,j;
  int **x;
  rows=atoi(argv[1]);
  cols=atoi(argv[2]);

  x = allocate(rows,cols);


  /* use the array */
  func(x, rows, cols);
  //func(y, rows, cols);

  for (i=0; i<rows; i++){
    printf("\n");
    for (j=0; j<cols; j++){
      printf("%3d ",x[i][j]);
    }
  }
  printf("\n");

  /* deallocate the array */
  free_array(x,rows);

}




