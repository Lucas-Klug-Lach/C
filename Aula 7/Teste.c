#include <stdio.h>

int main(){
	
	char names[2][4];
	int i,j;
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("Escreva um nome: ");
			scanf("%s", names[i]);
			fflush(stdin);
		}
	}
	
	for(i=0;i<3;i++){
		for(j=0;j<5;j++){
			printf("%s ", names[i][j]);
			
		}
		printf("linha %d");
		printf("\n");
	}
	
}
