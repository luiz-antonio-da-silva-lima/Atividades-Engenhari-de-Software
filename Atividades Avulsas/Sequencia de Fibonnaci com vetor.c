#include <stdio.h>
int main(int argc, char** argv)
{int numerotermos, pn = 0 , sn = 1, proxn, i;
	printf("Digite o numero de termos da sequencia de Fibonnaci : ");
	scanf("%d", &numerotermos);
	int SQNCF[numerotermos];
	for (i=0;i<=numerotermos;i++){
		if (i <= 1){
			proxn = i;} else{
			proxn = pn + sn;
			pn = sn;
			sn = proxn;}
	SQNCF[i] = proxn;
	printf("\n%d", SQNCF[i]);}
	return 0;}