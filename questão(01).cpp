#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int totalidade(int num);

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int n, soma;
	
	printf("Digite um n�mero: ");
	scanf("%d", &n);
	
	soma = totalidade(n);
	
	printf("A totalidade da soma de todos os n�meros \nentre 1 e o n�mero digitado �: %d", soma);
	
}

int totalidade(int num) {
	int resultado = 0;
	
	for(int i = 1; i <= num; i++) {
	resultado = resultado + i;
		
	}
	return resultado;
}
