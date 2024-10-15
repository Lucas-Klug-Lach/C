#include <stdio.h>
#include <stdlib.h>
#define texto "---------Carteira de Motorista-----------"

int main(){
	printf("%s \n", texto);
	
	int ano_nasc, ano_atual, idade;
	char nome[50] = "";
	
	printf("Qual o seu nome:\n");
	scanf("%s", nome);
	
	printf("Em que ano vc nasceu:\n");
	scanf("%d", &ano_nasc);
	
	printf("Em que ano nos estamos:\n");
	scanf("%d", &ano_atual);
	
	idade = ano_atual - ano_nasc;
	
	printf("-----------Resultados----------- \n");
	
	if (idade >= 18){
		printf("%s e permitido para dirigir \n", nome);
		printf("%d Anos\a", idade);
	}else{
		printf("%s nao e permitido para dirigir \n", nome);
		printf("%d Anos\a", idade);
	}
	
	system("Pause");
	
}
