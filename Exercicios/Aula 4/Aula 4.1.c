#include <stdio.h>
#include <stdlib.h>

int main(){
	
	float m;
	
	printf("Insira a nota: \n");
	scanf("%f", &m);
	
	if(m >= 7.0){
		printf("Aprovado :D. \n \a");
	}else{
		printf("Desaprovado :C. \n \a");
	}
	
	
	system("pause");
}
