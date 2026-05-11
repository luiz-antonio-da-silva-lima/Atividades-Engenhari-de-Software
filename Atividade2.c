#include <stdio.h>



int main() {
    int numeros[3][3];
       for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                numeros[i][j] = i * 3 + j + 1;
            }
        }

       for(int i = 0; i<3; i++){
            for(int j = 0; j<3; j++){
                printf("%d   ", numeros[i][j]);
            }
            printf("\n");
        }

           return 0;
    }