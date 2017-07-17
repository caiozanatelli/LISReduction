#include "SolveBackTracking.h"
#include <limits.h>
#include <stdlib.h>

#define max(x, y)   (x > y ? x : y)
#define M_INF       INT_MIN


// Função acessada caso o algoritmo selecionado seja o força bruta
int solveBackTracking(Instance *instance) {
	return getLISLengthBackTracking(M_INF, instance->pairs, 0, instance->size - 1);
}

// Encontra o tamanho da maior subsequência crescente via recursão (força bruta)
int getLISLengthBackTracking(int previous, Pair *array, int left, int right) {
	if (left > right) {
		return 0;
	}
	else if (array[left].bar <= previous) {
		return getLISLengthBackTracking(previous, array, left + 1, right);
	}
	else {
		int x = getLISLengthBackTracking(previous, array, left + 1, right);
		int y = 1 + getLISLengthBackTracking(array[left].bar, array, left + 1, right);
		return max(x, y);
	}
}

