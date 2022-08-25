#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

    double saque;
    int  notas100, notas50, notas20, notas10, notas5, notas2, notas1;
    int moeda_1, moeda_50, moeda_25, moeda_10, moeda_5, moeda_01;
    printf("Insira o valor de saque: ");
    scanf("%lf", &saque);

   notas100 = saque/100;
	saque = saque - (notas100 * 100);
	
	notas50 = saque/50;
	saque = saque - (notas50 * 50);
	
	notas20 = saque/20;
	saque = saque - (notas20 * 20);
	
	notas10 = saque/10;
	saque = saque - (notas10 * 10);
	
	notas5 = saque/5;
	saque = saque - (notas5 * 5);
	
	notas2 = saque/2;
	saque = saque - (notas2 * 2);
	
	moeda_1 = saque/1;
	saque = saque - (moeda_1 * 1);
	
	moeda_50 = saque/0.50;
	saque = saque - (moeda_50 * 0.50);
	
	moeda_25 = saque/0.25;
	saque = saque - (moeda_25 * 0.25);
	
	moeda_10 = saque/0.10;
	saque = saque - (moeda_10 * 0.10);
	
	moeda_5 = saque/0.05;
	saque = saque - (moeda_5 * 0.05);
	
	moeda_01 = saque/0.01;
	saque = saque - (moeda_01 * 0.01);
	
	
    //printar notas
    printf("\n NOTAS: \n");
    printf("%d nota(s) de R$ 100,00\n", notas100);
    printf("%d nota(s) de R$ 50,00\n", notas50);
    printf("%d nota(s) de R$ 20,00\n", notas20);
    printf("%d nota(s) de R$ 10,00\n", notas10);
    printf("%d nota(s) de R$ 5,00\n", notas5);
    printf("%d nota(s) de R$ 2,00 \n", notas2);

    //printar moedas
    printf("\n MOEDAS: ");
    printf("\n%d moeda(s) de R$ 1.00", moeda_1);
    printf("\n%d moeda(s) de R$ 0.50", moeda_50);
    printf("\n%d moeda(s) de R$ 0.25", moeda_25);
    printf("\n%d moeda(s) de R$ 0.10", moeda_10);
    printf("\n%d moeda(s) de R$ 0.05", moeda_5);
    printf("\n%d moeda(s) de R$ 0.01", moeda_01);

    return 0;
}
