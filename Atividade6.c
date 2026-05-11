#include <stdio.h>



int main() {
    int mat1[2][3], mat2[3][2], resultado[2][2];
       for(int i = 0; i<2; i++){
            for(int j = 0; j<3; j++){
                printf("Digite o valor da matriz 1 na posição [%d][%d]: ", i, j);
                scanf("%d", &mat1[i][j]);
            }
        }

       for(int i = 0; i<3; i++){
            for(int j = 0; j<2; j++){
                printf("Digite o valor da matriz 2 na posição [%d][%d]: ", i, j);
                scanf("%d", &mat2[i][j]);
            }
        }

        printf("%d   ",resultado[0][0] = mat1[0][0]*mat2[0][0] + mat1[0][1]*mat2[1][0] + mat1[0][2]*mat2[2][0]);
        printf("%d   ",resultado[0][1] = mat1[0][0]*mat2[0][1] + mat1[0][1]*mat2[1][1] + mat1[0][2]*mat2[2][1]);
        printf("\n");
        printf("%d   ",resultado[1][0] = mat1[1][0]*mat2[0][0] + mat1[1][1]*mat2[1][0] + mat1[1][2]*mat2[2][0]);
        printf("%d   ", resultado[1][1] = mat1[1][0]*mat2[0][1] + mat1[1][1]*mat2[1][1] + mat1[1][2]*mat2[2][1]);
           
        
        return 0;
    }