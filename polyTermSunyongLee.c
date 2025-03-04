/**
 * Program Name: polyTermSunyongLee.c
 * Discussion:   Implentation File
 *                 struct Fraction & Relevance
 * Written By:   Sunyong Lee
 * Date:         2024/05/26
 */

// Include/Header File(s)
#include <stdio.h>
#include <stdlib.h>
#include "fractionSunyongLee.h"
#include "polyTermSunyongLee.h"

// Function Definitions

TdPolyTermAddr createPolyTermSYL(void) {
    
    TdPolyTermAddr termSYL = (TdPolyTermAddr)malloc(sizeof(TdPolyTerm));
    if (termSYL == NULL) {
        printf("Memory allocation failed. \n");
        return NULL;
    }
    
    printf("              Enter expo: ");
    scanf(" %d", &termSYL->order);
    
    printf("              Creating coeff Fraction: ");
    termSYL -> coeff = *createFractionSYL();
    return termSYL;
}
