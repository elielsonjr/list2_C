#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	// deve-se fornecer o tempo gasto na viagem (em horas) e a velocidade média durante a mesma (em km/h).
	
	int tempo, velocidadeMedia;
	float litros, distancia;
	
	printf("Tempo gasto na viajem (Em Horas): \n");
	scanf("%d", &tempo);
	printf("Velociadade media usada (Em Km/h): \n");
	scanf("%d", &velocidadeMedia);
	
	// 12km = 1l
	distancia = tempo * velocidadeMedia;
	litros = distancia / 12;
	
	printf("%.3f", litros);
	
	return 0;
}
