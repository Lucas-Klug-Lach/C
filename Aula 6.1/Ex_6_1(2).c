#include <stdio.h>

int main(){
	int v[5];
	int i;
	
	for(i = 0; i<7;i++){
		printf("Insira um dado: ");
		scanf("%d", &v[i]);
	}
	
	printf("Dados informados:\n");
	for(i=0;i<5;i++){
		printf("%d ", v[i]);
	}
}
