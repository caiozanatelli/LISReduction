#ifndef SOLVE_GREEDY_H
#define SOLVE_GREEDY_H

#include "Instance.h"

/*------------------------------------------------------------------------------
 Função:  função acessada pelo usuário para resolver o problema através  de 
          um algoritmo guloso. Essa implementação utiliza o método Patience
          Sort.
 Entrada: ponteiro para uma variável do tipo Instance.
 Saída:   retorna tamanho da maior subsequência crescente no vetor dado.
------------------------------------------------------------------------------*/
int solveGreedy(Instance *instance);


#endif

