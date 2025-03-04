/**
  * Program Name:   polyNodeUtilitySunyongLee.h
  * Discussion:     Specification File
  *                   struct Fraction & PolyTerm Relevance
  * Written By:     Sunyong Lee
  * Submitted Date: 2024/05/26
  */

#ifndef polyNodeUtilitySunyongLee_h
#define polyNodeUtilitySunyongLee_h

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionSunyongLee.h"
#include "fractionUtilitySunyongLee.h"
#include "polyTermSunyongLee.h"
#include "polyTermUtilitySunyongLee.h"

// Function Prototypes
int searchNodeSYL(struct PolyNodeSYL*, struct PolyNodeSYL*);
void insertNodeSYL(int, struct PolyNodeSYL*, struct PolyNodeSYL** );
void addictionTwoFractionSYL(struct PolyNodeSYL* , struct PolyNodeSYL**);
struct PolyNodeSYL* createPolySYL(void);
void removePolyASYL(struct PolyNodeSYL** polyAddrSYL);
void removeNodeByOrderSYL(struct PolyNodeSYL**, int);



#endif /* polyNodeUntilitySYL_h */

