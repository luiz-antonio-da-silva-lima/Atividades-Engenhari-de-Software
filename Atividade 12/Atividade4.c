#include <stdio.h>



int main() {
    int numeros[2][3];
       for(int i = 0; i<2; i++){
            for(int j = 0; j<3; j++){
                numeros[i][j] = i * 2 + j + 1;
            }
        }

       for(int i = 0; i<2; i++){
            for(int j = 0; j<1; j++){
            int somalinha = numeros[i][j] + numeros[i][j+1] + numeros[i][j+2];
                printf("%d   ", somalinha);
            }
            printf("\n");
        }

           return 0;
    }