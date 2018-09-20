/*******************************************************************************
 * BlockForm (by Muhammad Khan)                                                *
 *                                                                             *
 *                                                                             *
 * A very rudimentary implementation of a blockchain platform, mostly for      *
 * educational purposes but (hopefully) abstract enough to be used for test    *
 * deployments if anyone so chooses.                                           *
 *******************************************************************************/
#IFNDEF _BLOCKCHAIN_H_
#DEFINE _BLOCKCHAIN_H_

/* Begin Data Types */

/**
The datatype representing the blockchain
 */
typedef struct blockchain* blockchain_t;

/**
The datatype representing a datum, or unit of information, which is used to
piece together the blockchain
 */
typedef struct datum datum_t;




/* Begin Functions */


/**
 * blockchain_init
 * 
 * <Add cool-sounding doc>
 */
blockchain_t blockchain_init(void);



/**
 * blockchain_destroy
 * 
 * <Add cool-sounding doc>
 * Returns 0 if error occurred
 */
int blockchain_destroy(blockchain_t bc);



/**
 * blockchain_init
 * 
 * <Add cool-sounding doc>
 * Returns 0 if error occurred
 */
int blockchain_add(blockchain_t bc, datum_t d);

#ENDIF /* BLOCKCHAIN_H */
