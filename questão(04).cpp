#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int trf_raio(int raio);

int main() {
	setlocale(LC_ALL,"Portuguese_Brazil");
	
	float r, vlm;
	
	printf("Calcular o volume do raio de uma esfera.");
	printf("\n_____________________________________________________");
	printf("\nDigite o raio da esfera para calcular o seu volume: ");
	scanf("%f", &r);
	
	vlm = trf_raio(r);
	
	printf("O volume da esfera desse raio é: %.2f", vlm);
}

int trf_raio(int raio) {
	float resultado = 4.0/3.0 * (raio * raio * raio);
	
	return resultado;
}
