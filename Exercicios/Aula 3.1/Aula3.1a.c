#include <stdio.h>
#include <stdlib.h>

#define texto "Entrada e saida de dados"

int main(){
	printf("%s \n", texto);
	
	int idade = 0;
	float altura = 0.0;
	char nome[50] = "";
	
	printf("Digite a idade:\n. \a");
	scanf("%i", &idade);
	
	printf("Digite a altura:\n. \a");
	scanf("%f", &altura);
	
	printf("Digite o nome:\n. \a");
	scanf("%s", nome);
	
	printf("Dados informados:\n");
	printf("Idade: %d. \n", idade);
	printf("Altura: %.2f. \n", altura);
	printf("Nome: %s. \n", nome);
	
	system("pause");
	
}
