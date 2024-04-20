#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

//Lucas Moreira Nunes
//Caio Matheus Dantas Real

int main(){
	setlocale(LC_ALL,"");
	
	int somaNotas = 0;
	int peso[3] = {3, 3, 4};
	char nomeDisciplina[3][50];
	float notas[3][3], media[3]; 
	int i, j;
	
	printf("===== Pedindo informações =====\n");
	for ( i = 0; i < 3; i++){
		printf("\nDigite o nome da %iª matéria: ", i + 1);
		scanf("%s",&nomeDisciplina[i]);
			for( j = 0; j < 3; j++){
				printf("Digite a %iª nota da %iª matéria: ", j + 1, i+1);
				scanf("%f",&notas[i][j]);
				somaNotas += notas[i][j] * (float)peso[j];
			}
		media[i] = somaNotas / (float) 10;
		somaNotas = 0;	
 	} 
 	
 	system("cls");
 	
 	printf("===== Exibindo resultados =====");
	 for(i = 0; i < 3; i++){
	 	printf("\nNome da disciplina: %s", nomeDisciplina[i]);
	 	for(j = 0; j < 3; j++){
	 		printf("\n%iª nota: %.2f\t peso: %i", j+1, notas[i][j], peso[j]);
		 }
	 	printf("\nMédia da matéria: %.2f\n", media[i]);
	 }
	return 0;
}
