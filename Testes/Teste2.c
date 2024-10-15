#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char usu[1];
	int senha = 0;
	
	printf("Digite o Usuário: %s. \n", usu);
	scanf("%s", usu);
	printf(usu);
	
	if (strcmp(usu, "Admin")){
		printf("Digite a Senha: %d", senha);
		scanf("%d", senha);
		printf(senha);
	}else{
		printf("ACESSO NEGADO \n);
	}
	
	system("pause");
	
	
}

