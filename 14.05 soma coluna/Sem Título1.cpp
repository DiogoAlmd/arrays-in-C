#include <stdio.h>
#include <stdlib.h>

int main(){
	
	int matriz[10][10], linha, coluna, lin=0, col=0, soma[10], maior, pos;
	
	do{
		
		printf("\nLinhas: ");
		scanf("%i", &linha);
		fflush(stdin);
		
	}while(linha<1 || linha>10);
	
	do{
		
		printf("Colunas: ");
		scanf("%i", &coluna);
		fflush(stdin);
		
	}while(coluna<1 || coluna>10);
	
	for(lin=0;lin<linha;linha++)
		for(col=0;col<coluna;col++){
			
			printf("\nmatriz[%i][%i]= ", lin, col);
			scanf("%i", &matriz[lin][col]);
			fflush(stdin);
			
		}
		
	for(col=0; col<coluna; col++){
		
		soma[col] = 0;  //limpando cada elemento do meu vetor
		for(lin=0; lin<linha; lin++)
			soma[col] += matriz[lin][col];
		
	}
	
	for(lin=0; lin<linha; lin++)
		for(col=0; col<coluna; col++){
			printf("%i\t", matriz[lin][col]);
		printf("\n");
		}
		
	for(col=0; col<coluna; coluna++){
		
		if(col==0){
			col = soma[0];   //1° elemento do vetor soma
			pos = 0;
		}
	printf("\nColuna %i - Soma: %i\n", col, soma[col]);
	
		if (maior<soma[col]){
			maior=soma[col];
			pos=col;
		}	
	}
	
	printf("\nMaior coluna %i - Soma: %I\n\n", pos, maior);
	
	system("pause");
	return 0;	
}
