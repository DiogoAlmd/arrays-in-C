#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	
	setlocale(LC_ALL, "portuguese");
	
	int m[2][2], i=0, j=0, y=0, z=0, a=0, b=0;
	char op;
		
	printf("Digite os valores da matriz: \n\n");
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){	
			printf("Digite o valor da linha %i e coluna %i: ", i,j);
			scanf("%i", &m[i][j]);
	}
}
	
	printf("os valores digitados são:\n");
	
		
	for(y=0; y<2; y++){
		for(z=0; z<2; z++){
			printf("%i", m[y][z]);
		}
		printf("\n");
	}


	printf("vc quer somar os valores? [s]im n[ão] \n");
	scanf("\n%c", &op);
	
	if(op == 's'){
		
		for(a=0;a<2;a++){
			for(b=0;b<1;b++){
				printf("%i", m[a][b] + m[a][b+1]);
		}
		printf("\n");
	}
}

	else{
		printf("vaza");
}

	system("pause");
	return 0;
}
