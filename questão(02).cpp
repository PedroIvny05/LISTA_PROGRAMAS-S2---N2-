#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int cnvrt_horas(int h);
int cnvrt_minutos(int m);

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	int horas, minutos, segundos, resultado;
	
	printf("Digite o valor em horas, minutos e segundos.");
	
	printf("\n___");
	printf("\nHoras: ");
	scanf("%d", &horas);
	
	printf("Minutos: ");
	scanf("%d", &minutos);
	
	printf("Segundos: ");
	scanf("%d", &segundos);
	
	resultado = cnvrt_horas(horas) + cnvrt_minutos(minutos) + segundos;
	
	printf("O valor em segundos é: %d segundos.", resultado);
	
}

int cnvrt_horas(int h) {
	
	int resultado = h * 3600;
	
	return resultado;
}

int cnvrt_minutos(int m) {
	
	int	resultado = m * 60;
	
	return resultado;
}
