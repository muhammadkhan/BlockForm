/*******************************************************************************
 * BlockForm (by Muhammad Khan)                                                *
 *                                                                             *
 *                                                                             *
 * A very rudimentary implementation of a blockchain platform, mostly for      *
 * educational purposes but (hopefully) abstract enough to be used for test    *
 * deployments if anyone so chooses.                                           *
 *******************************************************************************/

#include <stdlib.h>
#include "blockchain.h"

// I smashed my keyboard to come up with this 'unique string'
#define NONSENSE "49jfierugbdfhznjfi"

typedef struct{
  unsigned int* number;
  int len;
} big_int;

big_int* big_int_init(){
  big_int* bi = (big_int*)malloc(sizeof(big_int));
  bi->number = (unsigned int*)malloc(sizeof(unsigned int));
  bi->number[0] = 0;
  bi->length = 1;
  return bi;
}

void big_int_incr(big_int* bi){
  
}

/**
 * Choosing to model information as transactions
 */
struct datum{
  big_int id;
  char* from;
  char* to;
  big_int amt;
  int hash;
};

struct blockchain{
  datum_t info;
  struct blockchain* next;
};

blockchain_t blockchain_init(void){
  datum_t info = (datum_t)malloc(sizeof(struct datum));
  info->id = big_int_init();
  big_int_incr(&(info->id)); //Doable?
  info->from = NONSENSE;
  info->to = NONSENSE;
  info->amt = big_int_init();
  blockchain_t bc = (blockchain_t)malloc(sizeof(struct blockchain));
  bc->info = info;
  bc->next = NULL;
  return bc;
}

int blockchain_destroy(blockchain_t bc){
  return 0;
}

int blockchain_add(blockchain_t bc, datum_t d){
  return 0;
}
