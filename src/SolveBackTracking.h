#ifndef SOLVE_BACK_TRACKING_H
#define SOLVE_BACK_TRACKING_H

#include "Instance.h"

/*------------------------------------------------------------------------------
 Função:  função acessada pelo usuário para resolver o problema por força bruta.
 Entrada: ponteiro para uma variável do tipo Instance e o tamanho do vetor.
 Saída:   maior quantidade de bandeirolas que podem ser conectadas sem que haja
          cruzamentos.
------------------------------------------------------------------------------*/
int solveBackTracking(Instance *instance);


/*------------------------------------------------------------------------------
 Função:  função  recursiva para  encontrar o  tamanho da maior  subsequência 
          crescente em um vetor.
 Entrada: ponteiro para uma variável do tipo Instance, o ítem anterior ao que
          está sendo avaliado no  momento, para determinar se a  subsequência
          continua  crescente, e dois  índides - left e  right, que controlam
          os acessos ao vetor.
 Saída:   retorna o tamanho da maior subsequência crescente no vetor dado.
------------------------------------------------------------------------------*/
int getLISLengthBackTracking(int previous, Pair *array, int left, int right);


#endif

