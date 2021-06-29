#ifndef __BTREEINSERT_H__
#define __BTREEINSERT_H__

#include "bTreeUtils.h"


//INSERÇÃO NA BTREE
/*
 * Função que inicia a inserção na BTree a partir de um registro
 * específico
*/
int bTreeInsert(record *newRecord);

/*
 * Função recursiva que percorre a árvore para inserção de um registro.
 * Já realiza o tratamento de nós promovidos.
*/
int _bTreeInsert(record *newRecord, bPageInfo *newPage, promotedKey **promoted);

/*
 * Função que realiza a inserção de um registro em uma página específica da BTree.
*/
void bTreeInsertIntoPage(record *newRecord, promotedKey **promoted, bPageInfo *newPage, long insertPosition);

/*
 * Função responsável pela atualização da página header da BTree.
*/
int headerUpdate(promotedKey *promoted, FILE *bFile);



#endif