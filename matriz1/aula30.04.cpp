#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int numero[12], x, neg=0;
		
	for(x = 0; x < 12; x++){
		printf("\nDigite o numero da posição: ");
		scanf("%i", &numero[x]);
		fflush(stdin);
	}
	
	for(x=0; x<12; x++){
		if (numero[x]<0){
			neg++;
		}
	}
	
	printf("\nQuantidade de nuemros negativos = %i\n\n", neg);
	system("pause");
	return 0;
}
