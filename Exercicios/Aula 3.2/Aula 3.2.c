#include <stdio.h>
#include <stdlib.h>

#define texto "------------Realizando Calculos em C-------------"

int main(){
	printf("%s \n", texto);
	
	int A, B, soma, subtr, mult, divis;
	
	printf("Digite o primeiro valor:\n");
	scanf("%d", &A);
	printf("Digite o Segundo valor:\n");
	scanf("%d", &B);
	
	soma = A + B;
	subtr = A - B;
	mult = A * B;
	divis = A / B;
	
	printf("-----------Resultados-------------\n");
	printf("Soma: %d. \n", soma);
	printf("Subtracao: %d. \n", subtr);
	printf("Multiplicacao: %d. \n", mult);
	printf("Divisao: %d. \n", divis);
	
}
