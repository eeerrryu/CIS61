/**
 * Program Name: fractionSunyongLee.h
 * Discussion:   Specification File
 *                 struct Fraction & Relevance
 * Written By:   Sunyong Lee
 * Date:         2024/05/26
 */

#ifndef fractionSunyongLee_h
#define fractionSunyongLee_h

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionUtilitySunyongLee.h"

struct FractionSYL {
    int numSYL;
    int denomSYL;
};

// typedef
typedef struct FractionSYL TdFractionSYL;
typedef TdFractionSYL* TdFractionPtrSYL;
typedef TdFractionSYL* TdFractionAddrSYL;

// Function Prototypes

TdFractionAddrSYL createFractionSYL(void);

#endif /* fractionSunyongLee_h */
