#include <stdio.h>
#include <stdbool.h>
#include <locale.h>

int main() {
    char operador;
    float n1, n2, resultado;
    bool valido = true;
    setlocale(LC_ALL, "Portuguese");
    
    
    
    printf("**************** Calculadora ****************\n\n");
       do {
	    printf("\nDigite a operação (+ , - , * , /)");
        scanf("%c", &operador);
        printf("Digite o primeiro numero\n");
        scanf("%f", &n1);
        printf("Digite o segundo numero\n");
        scanf("%f", &n2);
	        if (operador == '+'){
	        resultado= n1 + n2 ;
	        printf("O resultado da soma é %0.2f", resultado);
	        valido = true;
	        }
	        else if (operador == '-'){
	        resultado=n1 - n2;
	         printf("O resultado da subtração é %0.2f", resultado);
	        valido = true;
	        }
	        else if (operador == '*'){
	        resultado=n1 * n2;
	        printf("O resultado da multiplicação é %0.2f", resultado);
	        valido = true;
	        }
	        else if (operador == '/'){
	        resultado= n1 / n2;
	        printf("O resultado da divisão é %0.2f", resultado);
	        valido = true;
	        } else {
	            printf("Por favor, digite um operador valido\n");
	            valido = false;
        }
		}while(valido == false);
printf("\n\n*********************************************");
return 0;
}
    
    
    
    
    
    
    
    