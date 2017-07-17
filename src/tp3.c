////////////////////////////////////////////////////////////////////////////////
//																			  //
// 					UNIVERSIDADE FEDERAL DE MINAS GERAIS					  //
//																			  //
// Trabalho Prático 3 - Algoritmos e Estruturas de Dados III				  //
//																			  //
// Nome: 		Caio Felipe Zanatelli										  //
// Matrícula: 	2016006310													  //
//																			  //
//																		      //
////////////////////////////////////////////////////////////////////////////////


#include "Instance.h"
#include <stdlib.h>
#include <stdio.h>

int main() {
	char algorithm;
	int numBars;

	// Lê configurações da entrada
	scanf("%c %d", &algorithm, &numBars);

	// Lê os pares <bar, owner> da rua
	Instance instance;
	initInstance(&instance, numBars);
	readInstance(&instance);

	printf("%d\n", solveInstance(&instance, algorithm));
	//solveInstance(&instance, algorithm);
	
	// Libera memória utilizada
	freeInstance(&instance);
	
	return 0;
}

