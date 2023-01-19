#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int numero[10], x, procurado, cont=0;
	
	for(x=0; x<10; x++){
		printf("\nNumero [%i] = ", x);
		scanf("%i", &numero[x]);
		fflush(stdin);
	}

do{
	printf("Digite o numero que deseja procurar: ");
	scanf("%i", &procurado);
	fflush(stdin);
	
	for(x=0;x<10;x++){
		if(numero[x] == procurado){
			cont++;
		}
	
	if(cont==0){
		printf("\nNumero nao encontrado");
		}
	}
}while(cont==0);

printf("\nO numero %i foi encontrado %i vez(es)\n\n", procurado, cont);
	
	system("pause");
	return 0;	
}
