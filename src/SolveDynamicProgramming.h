#ifndef SOLVE_DYNAMIC_PROGRAMMING_H
#define SOLVE_DYNAMIC_PROGRAMMING_H

#include "Instance.h"

/*------------------------------------------------------------------------------
 Função:  função acessada pelo usuário para resolver o problema por programação
          dinâmica.
 Entrada: ponteiro para uma variável do tipo Instance.
 Saída:   maior quantidade de bandeirolas que podem ser conectadas sem que haja.
          cruzamentos.
------------------------------------------------------------------------------*/
int solveDynamicProgramming(Instance *instance);


/*------------------------------------------------------------------------------
 Função:  busca binária com upper bound.
 Entrada: vetor e chave para pesquisa e os índices da esquerda e direita que
          delimitam a área de pesquisa no vetor.
 Saída:   retorna o índice procurado.
------------------------------------------------------------------------------*/
int binarySearchUpperBound(int *array, int left, int right, int key);


/*------------------------------------------------------------------------------
 Função:  função  por programação dinâmica para  encontrar o tamanho da maior  
          subsequência crescente em um vetor.
 Entrada: vetor do tipo Pair e seu tamanho.
 Saída:   retorna o tamanho da maior subsequência crescente no vetor dado.
------------------------------------------------------------------------------*/
int getLISLengthDP(Pair *array, int size);


#endif

