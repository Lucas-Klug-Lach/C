#include <stdio.h>
#include <string.h>
#include <locale.h>

#define TAM 50

struct tipo_pessoa{
	int idade;
	float peso;
	char nome[TAM];
};

typedef struct tipo_pessoa tipo_pessoa;

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Criando e inicializando a variável
	
	tipo_pessoa pes = {0, 0.0, "Teste"};
	
	printf("Início:\n");
	printf("Pes.idade: %d\n", pes.idade);
	printf("Pes.peso: %.2f\n", pes.peso);
	printf("Pes.nome: %s\n", pes.nome);
	
	//Atribuindo valores aos campos
	pes.idade = 10;
	pes.peso = 99.99;
	strcpy(pes.nome, "Enzo");
	
	printf("\nAlterando os campos via código:\n");
	printf("Pes.idade: %d\n", pes.idade);
	printf("Pes.peso: %.2f\n", pes.peso);
	printf("Pes.nome: %s\n", pes.nome);
	
	//Solicitando inserções via STDIN
	
	printf("\nInsira um número inteiro: ");
	scanf("%d", &pes.idade);
	fflush(stdin);
	printf("\nInsira um número real: ");
	scanf("%f", &pes.peso);
	fflush(stdin);
	printf("\nInsira uma palavra: ");
	scanf("%s", &pes.nome);
	
	printf("\nAlterando com dados do usuário:\n");
	printf("Pes.idade: %d\n", pes.idade);
	printf("Pes.peso: %.2f\n", pes.peso);
	printf("Pes.nome: %s\n", pes.nome);
}
