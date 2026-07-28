/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int j, k;
    int mat[3][3];
    printf("\tMatrizes - Diagonal Principal\n\n");
    for (j = 0; j < 3; j++)
        for (k = 0; k < 3; k++)
        {
            printf("Número [%d][%d]: ", j, k);
            scanf("%d", &mat[j][k]);
        }
    for (j = 0; j < 3; j++)
        for (k = 0; k < 3; k++)
        {
            printf("%d ", mat[j][k]);
            if (k == 2)
                printf("\n");
        }
    printf("Diagonal Principal\n");
    for (j = 0; j < 3; j++)
        for (k = 0; k < 3; k++)
        {
            if (j == k)
                printf("%d ", mat[j][k]);
        }
    return 0;
}
