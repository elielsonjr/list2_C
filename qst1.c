#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	char nomeFunc[30];
	double salarioFixo, totalDeVendas, comissao, salarioNovo;
	
	printf("Nome do Funcionário: \n");
	scanf("%s", nomeFunc);
	
	printf("Qual seu salario fixo em R$: \n");
	scanf("%lf", &salarioFixo);
	printf("Total de vendas em R$: \n");
	scanf("%lf", &totalDeVendas);
	
	comissao = 0.15 * totalDeVendas;
	salarioNovo = salarioFixo + comissao;
	
	printf("%s \n", nomeFunc);
	printf("%0.2lf \n", salarioFixo);
	printf("Seu salario total e de R$ %0.2lf \n", salarioNovo);
	
	return 0;
}
