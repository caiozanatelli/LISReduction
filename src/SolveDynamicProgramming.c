#include "SolveDynamicProgramming.h"
#include <stdlib.h>
#include <string.h>

// Função principal acessada pelo usuário para solução via Programação Dinâmica
int solveDynamicProgramming(Instance *instance) {
	return getLISLengthDP(instance->pairs, instance->size);
}

// Busca binária com upper bound para o algoritmo DP
int binarySearchUpperBound(int *array, int left, int right, int key) {
	while (right - left > 1) {
		int middle = left + (right - left)/2;

		if (array[middle] >= key) {
			right = middle;
		}
		else {
			left = middle;
		}
	}

	return right;
}

// Retorna a LIS através de uma abordagem DP bottom-up
int getLISLengthDP(Pair *array, int size) {
	// Caso base
	if (size == 0) {
		return 0;
	}

	// Tabela de memorização
	int *memo = (int*) calloc(size, sizeof(int));
	int length = 1;
	memset(memo, 0, size * sizeof(memo));
	memo[0] = array[0].bar;

	int i;
	for (i = 1; i < size; i++) {
		if (array[i].bar < memo[0]) {
			memo[0] = array[i].bar;
		}
		else if (array[i].bar > memo[length - 1]) {
			memo[length++] = array[i].bar;
		}
		else {
			memo[binarySearchUpperBound(memo, -1, length - 1, array[i].bar)] = array[i].bar;
		}
	}

	free(memo);

	return length;
}

