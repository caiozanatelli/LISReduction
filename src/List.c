#include <stdio.h>
#include <stdlib.h>
#include "List.h"

// Inicializa a lista
void initList(List *pList, int capacity) {
	pList->capacity = capacity;
	pList->data = (ListItem*) calloc(pList->capacity, sizeof(ListItem));
    pList->size = 0;
}

// Libera a memória utilizada pela lista
void freeList(List *pList) {
	free(pList->data);
}

// Insere um novo elemento no fim da lista
void pushBackList(List *pList, ListItem item) {
	if (pList->size == pList->capacity) {
		printf("Erro. A lista esta cheia. \n");
		return;
	}
	
	pList->data[pList->size++] = item;
}

// Retorna 1 se a lista estiver 0 e falso caso contrário
int isListEmpty(List *pList) {
    return (pList->size == 0);
}

// Retorna o tamanho atual da lista
int getListSize(List *pList) {
	return pList->size;
}

