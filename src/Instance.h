#ifndef INSTANCE_H
#define INSTANCE_H

// Configurações para seleção do algoritmo
#define OP_DYNAMIC_PROGRAMMING	'd'
#define OP_GREEDY_ALGORITHM		'g'
#define OP_BACKTRACKING			'b'

// Estrutura que define um pair no padrão <bar, owner>
typedef struct {
	int bar;
	int owner;
} Pair;

// Estrutura que define uma instância do problema (rua)
typedef struct {
	Pair *pairs;
	int size;
} Instance;


/*------------------------------------------------------------------------------
 Função:  inicializa uma instância do problema, alocando a memória necessária.
 Entrada: ponteiro para uma variável do tipo Instance e o tamanho do vetor.
 Saída:   sem rotorno.
------------------------------------------------------------------------------*/
void initInstance(Instance *instance, int size);


/*------------------------------------------------------------------------------
 Função:  libera a memória utilizada para armazenar a instância do problema.
 Entrada: ponteiro para uma variável do tipo Instance.
 Saída:   sem rotorno.
------------------------------------------------------------------------------*/
void freeInstance(Instance *instance);


/*------------------------------------------------------------------------------
 Função:  lê um par <bar, owner> tomando o cuidado de deixar ímpares de um lado
          e pares do outro.
 Entrada: ponteiro para o pair<int, int> a ser lido.
 Saída:   sem rotorno.
------------------------------------------------------------------------------*/
void readPair(Pair *pair);


/*------------------------------------------------------------------------------
 Função:  lê todos os pares <bar, owner> da entrada através da função readPair.
 Entrada: ponteiro para uma variável do tipo Instance.
 Saída:   sem rotorno.
------------------------------------------------------------------------------*/
void readInstance(Instance *instance);



/*------------------------------------------------------------------------------
 Função:  implementa um comparador para o tipo Pair p/ a ordenação dos pares.
 Entrada: ponteiro duas variáveis void (tipo genérico)
 Saída:   retorna um valor < 0 se a < b, 0 se a = b e > 1 se a > b.
------------------------------------------------------------------------------*/
int comparePairs(const void *a, const void *b);



/*------------------------------------------------------------------------------
 Função:  função principal acessada pelo usuário p/ a resolução do problema.
 Entrada: ponteiro para uma variável do tipo Instance e o ID do algoritmo.
          selecionado.
 Saída:   retorna a quantidade máxima de bandeirolas que podem ser conectadas
          sem que haja cruzamento  entre nenhuma, de acordo com os  critérios
          estipulados pelo trabalho.
------------------------------------------------------------------------------*/
int solveInstance(Instance *instance, int algorithm);


#endif

