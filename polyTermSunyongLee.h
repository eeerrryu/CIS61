/**
 * Program Name:   polyTermSunyongLee.h
 * Discussion:     Specification File
 *                   struct Fraction & PolyTerm Relevance
 * Written By:     Sunyong Lee
 * Submitted Date: 2024/05/26
 */

#ifndef polyTermSunyongLee_h
#define polyTermSunyongLee_h

//Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionSunyongLee.h"

struct PolyTermSYL{
    int order;
    struct FractionSYL coeff;
};

//typedef

typedef struct PolyTermSYL TdPolyTerm;
typedef TdPolyTerm* TdPolyTermPtr;
typedef TdPolyTerm* TdPolyTermAddr;

// Function Prototypes

TdPolyTermAddr createPolyTermSYL(void);


#endif /* polyTermSunyongLee_h */
