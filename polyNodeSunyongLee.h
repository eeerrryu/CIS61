/**
 * Program Name:   polyNodeSunyongLee.h
 * Discussion:     Specification File
 *                   struct Fraction & PolyTerm Relevance
 * Written By:     Sunyong Lee
 * Submitted Date: 2024/05/26
 */
#ifndef polyNodeSunyongLee_h
#define polyNodeSunyongLee_h

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionSunyongLee.h"
#include "polyTermSunyongLee.h"

struct PolyNodeSYL {
    struct PolyTermSYL* termPtrSYL;
    struct PolyNodeSYL* nextSYL;
};

// Function Prototypes
struct PolyNodeSYL* createPolyNodeSYL(void);
void addPolyNodeSYL(struct PolyNodeSYL**);
void displayPolynomialsforMainMenuSYL(struct PolyNodeSYL*);
int findDegreeSYL (struct PolyNodeSYL*);
void displayPolynomialsforInitMenuSYL(struct PolyNodeSYL*);
void displayPolynomialsforCreateSubMenuSYL(struct PolyNodeSYL*);
void displayPolynomialsforUpdateSubMenuSYL(struct PolyNodeSYL*);
void displayResultPolynomialsSYL(struct PolyNodeSYL*);

#endif /* polyNodeSunyongLee_h */
