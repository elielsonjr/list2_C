#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	float distancia, x1, y1, x2, y2, x, y, yy;
	
	printf("Digite os 2 primeiros valores: \n");
	scanf("%f %f", &x1, &y1);
	
	printf("Digite os 2 primeiros valores: \n");
	scanf("%f %f", &x2, &y2);
	
	x = x2-x1;
	y = y2-y1;
	distancia = sqrt(pow(x,2) + pow(y,2));
	
	printf("%.4f", distancia);
	
	return 0; 
}

