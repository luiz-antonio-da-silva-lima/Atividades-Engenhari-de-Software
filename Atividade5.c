#include <stdio.h>



int main() {
    int mat1[3][3], mat2[3][3], resultado[3][3];
       for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                printf("Digite o valor da matriz 1 na posição [%d][%d]: ", i, j);
                scanf("%d", &mat1[i][j]);
                printf("Digite o valor da matriz 2 na posição [%d][%d]: ", i, j);
                scanf("%d", &mat2[i][j]);
            }
        }

       for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                resultado[i][j] = mat1[i][j] * mat2[i][j];
                printf("%d   ", resultado[i][j]);
            }
            printf("\n");
        }

           return 0;
    }