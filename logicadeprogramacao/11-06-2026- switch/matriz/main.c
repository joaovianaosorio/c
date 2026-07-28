/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int mat [3][3] = {1 , 4 , 6,
                      2, 66, 88,
                      9, 12, 25};
    int j, k;
    printf("\tMatrizes\n");
    for (j = 0; j < 3; j++){
     for (k = 0; k < 3; k++){
      printf("%d ", mat[j][k]);
      if (k == 2){
       printf("\n");
     }
    
     }
    }

    return 0;
}