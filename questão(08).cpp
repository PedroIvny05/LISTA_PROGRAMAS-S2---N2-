#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int total(int n);

int main () {
	setlocale(LC_ALL,"Portuguese_Brazil");
	int num, fatorial;
	
	printf("Informe aqui um n�mero: ");
	scanf("%d", &num);
	
	fatorial = total(num);
	
	printf("O fatorial dele �: %d.", fatorial);
	
}

int total(int n) {
	int i;
	
	for( i = 1; n > 1; n--){
		i = i * n;
	}
	return  i;
}
