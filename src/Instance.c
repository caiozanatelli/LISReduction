#include "SolveDynamicProgramming.h"
#include "SolveBackTracking.h"
#include "SolveGreedy.h"
#include "Instance.h"
#include <stdlib.h>
#include <stdio.h>

// Resolve o problema de acordo com o algoritmo selecionado. DP é o default
int solveInstance(Instance *instance, int algorithm) {

	// Ordena instância do problema de acordo com as coordenadas <owner>
	qsort(instance->pairs, instance->size, sizeof(Pair), comparePairs);

	if (algorithm == OP_BACKTRACKING) {
		return solveBackTracking(instance);
	}
	else if (algorithm == OP_GREEDY_ALGORITHM) {
		return solveGreedy(instance);
	}
	else if (algorithm == OP_DYNAMIC_PROGRAMMING) {
		return solveDynamicProgramming(instance);
	}
	else { // default
		return solveDynamicProgramming(instance);
	}

}

// Inicializa uma instância do problema, alocando o vetor de pairs
void initInstance(Instance *instance, int size) {
	instance->size = size;
	instance->pairs = (Pair*) calloc(size, sizeof(Pair));
}

// Libera a memória alocada para a instância
void freeInstance(Instance *instance) {
	free(instance->pairs);
}

// Lê os pares da entrada e ajusta os números pares e ímpares se preciso
void readPair(Pair *pair) {
	int x, y;
	scanf("%d %d", &x, &y);

	// Se x é ímpar
	if (x & 1) {
		pair->bar = x;
		pair->owner = y;
	}
	else {
		pair->bar = y;
		pair->owner = x;
	}
}

// Lê os dados da entrada em pares, através da função readPair
void readInstance(Instance *instance) {
	int i;
	for (i = 0; i < instance->size; i++) {
		readPair(&instance->pairs[i]);
	}
}

// Compara dois pares para ordenação pelo qsort
int comparePairs(const void *a, const void *b) {
	Pair *pairA = (Pair*) a;
	Pair *pairB = (Pair*) b;

	if (pairA->owner == pairB->owner) {
		return pairA->owner - pairB->owner;
	}
	return pairA->owner - pairB->owner;
}
