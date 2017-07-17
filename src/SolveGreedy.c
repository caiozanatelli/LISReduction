#include "SolveGreedy.h"
#include "List.h"
#include <stdlib.h>

// Função principal acessada pelo usuário para solução via Programação Dinâmica
int solveGreedy(Instance *instance) {
	int size = instance->size;	

	Pair *pairs = instance->pairs;

	// Lista de pilhas. Como só o topo importa para LIS, apenas o topo é armazenado
	int *piles = (int*) calloc(size, sizeof(int));
	piles[0] = pairs[0].bar;

	int pileCount = 1;
	int i;

	for (i = 1; i < size; i++) {
		int left  = 0;
		int right = pileCount - 1;
		int middle;	

		// Encontra possível posição para o elemento
		while (left <= right) {
			middle = (left + right) / 2;

			if (pairs[i].bar > piles[middle]) {
				left = middle + 1;
			}
			else {
				right = middle - 1;
			}
		}

		// Se nenhuma posição foi encontrada, uma nova pilha é criada
		pileCount += (left >= pileCount);
		piles[left] = pairs[i].bar;
	}

	free(piles);
	
	return pileCount;
}

