#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int caulcular_media(int valores);

int main() {
    setlocale(LC_ALL,"Portuguese_Brazil");
    
    int va, media, resultado;
    
    printf("Programa para calcular média a partir dos valores informados\n");
    printf("Para parar, digite 0\n\n");
    
    printf("Digite um valor(s), para retornarmos a media: ");
    scanf("%d", &va);
    
    resultado = caulcular_media(va);
    
    printf("Média = %d ", resultado);
    
}

int caulcular_media(int valor) {
    
    int media = 0, qtd = 0, soma = 0;
    
    while(valor != 0) {
        soma = soma + valor;
        qtd++;
        
        printf("Digite um valor(s), para retornarmos a media: ");
        scanf("%d", &valor);
    }
    media = soma / qtd;
    
    return media;
}
