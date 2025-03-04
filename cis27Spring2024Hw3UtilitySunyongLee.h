/**
 * Program Name: cis27Spring2024Hw3UtilitySunyongLee.h
 * Discussion:   Specification File
 *                 Support Functions for HW3
 * Written By:   Sunyong Lee
 * Date:         2024/05/23
 */

#ifndef cis27Spring2024Hw3UtilitySunyongLee_h
#define cis27Spring2024Hw3UtilitySunyongLee_h

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionSunyongLee.h"
#include "polyNodeSunyongLee.h"
#include "fractionUtilitySunyongLee.h"



// Function Prototypes

void displayCodingStatementSYL(void);
void displayClassInfoSYL(void);
void runMenuHw3SYL(void);
void displayFractionInfoSYL(TdFractionPtrSYL);
void initSubmenuSYL(struct PolyNodeSYL**, struct PolyNodeSYL**);
void createSubmenuSYL(struct PolyNodeSYL**, struct PolyNodeSYL**);
int NumOfNodeSYL(struct PolyNodeSYL*);
int MaxNumOfNodeSYL(int, int);
void evaluatePolynomialSYL(struct PolyNodeSYL*, struct PolyNodeSYL*);
void updateSubmenuofFirst(struct PolyNodeSYL**);
void updateSubmenuofSecond(struct PolyNodeSYL**);
void findLCD(TdFractionPtrSYL***, int, int, int);
void reduceFractionSYL(int*, int*);
struct PolyNodeSYL* addPolynomials(struct PolyNodeSYL* polyNodeSYL1, struct PolyNodeSYL* polyNodeSYL2);
struct PolyNodeSYL* multiplyingPolynomials(struct PolyNodeSYL* polyNodeSYL1, struct PolyNodeSYL* polyNodeSYL2);

void sortPolynomialSYL(struct PolyNodeSYL**);


#endif /* cis27Spring2024Hw3UtilitySunyongLee_h */

