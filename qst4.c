#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int saque;
	int total, total2, total3, total4, total5, total6, total7;
	int resto, resto2, resto3, resto4, resto5, resto6, resto7;
	
	printf("Valor de saque: ");
	scanf("%d", &saque);
	
		total = saque / 100; // notas de 100
		resto = saque % 100; // resto dos 100
		
		total2 = resto / 50; // notas de 50
		resto2 = resto % 50; // resto dos 50
		
		total3 = resto2 / 20; // notas de 20
		resto3 = resto2 % 20; // resto dos 20
		
		total4 = resto3 / 10; // notas de 10
		resto4 = resto3 % 10; // resto dos 10
		
		total5 = resto4 / 5; // notas de 5
		resto5 = resto4 % 5; // resto dos 5
		
		total6 = resto5 / 2; // notas de 2
		resto6 = resto5 % 2; // resto dos 2
		
		total7 = resto6 / 1; // notas de 1
		resto7 = resto6 % 1; // resto dos 1
		
	
	printf("%d \n", saque);
	printf("%d nota(s) de R$ 100,00 \n", total);
	printf("%d nota(s) de R$ 50,00 \n", total2);
	printf("%d nota(s) de R$ 20,00 \n", total3);
	printf("%d nota(s) de R$ 10,00 \n", total4);
	printf("%d nota(s) de R$ 5,00 \n", total5);
	printf("%d nota(s) de R$ 2,00 \n", total6);
	printf("%d nota(s) de R$ 1,00 \n", total7);
	
	return 0;
}
