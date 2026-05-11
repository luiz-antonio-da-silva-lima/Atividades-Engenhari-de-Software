#include <stdio.h>



int main() {
    int numeros[2][2];
       for(int i = 0; i<2; i++){
            for(int j = 0; j<2; j++){
                numeros[i][j] = i * 2 + j + 1;
            }
        }

       for(int i = 0; i<2; i++){
            for(int j = 0; j<2; j++){
                printf("%d ", numeros[i][j]);
            }
        }

           return 0;
    }