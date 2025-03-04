/**
 * Program Name: fractionSunyongLee.c
 * Discussion:   Implentation File
 *                 struct Fraction & Relevance
 * Written By:   Sunyong Lee
 * Date:         2024/05/26
 */

// Include/Header File(s)
#include <stdio.h>
#include <stdlib.h>
#include "fractionSunyongLee.h"
#include "fractionUtilitySunyongLee.h"

// Function Definitions
TdFractionAddrSYL createFractionSYL(void){
    int gcdNumSYL;
    int numSignSYL;
    int denomSignSYL;
    
    TdFractionAddrSYL newFractionSYL = (TdFractionAddrSYL)malloc(sizeof(TdFractionSYL));
    if (newFractionSYL != NULL){
        printf("\n                Enter an int for num: ");
        scanf("%d", &newFractionSYL -> numSYL);
        do {
            printf("                Enter a non-zero for denom: ");
            scanf("%d", &newFractionSYL ->denomSYL);
            if (newFractionSYL -> denomSYL == 0){
                continue;
            }
        } while (newFractionSYL->denomSYL == 0);
    }
    
    numSignSYL = (newFractionSYL->numSYL < 0) ? -1 : 1;
    denomSignSYL = (newFractionSYL -> denomSYL < 0) ? -1 : 1;
    
    newFractionSYL-> numSYL = (newFractionSYL->numSYL < 0) ? -newFractionSYL->numSYL : newFractionSYL->numSYL;
    newFractionSYL-> denomSYL = (newFractionSYL->denomSYL < 0) ? -newFractionSYL->denomSYL : newFractionSYL->denomSYL;
    gcdNumSYL = gcdSYL(newFractionSYL->numSYL, newFractionSYL->denomSYL);
    
    if (gcdNumSYL >= 1 && numSignSYL == -1 && denomSignSYL == -1){
        newFractionSYL->numSYL /= gcdNumSYL;
        newFractionSYL->denomSYL /= gcdNumSYL;
    } else if (gcdNumSYL >= 1 && numSignSYL == -1 && denomSignSYL == 1){
        newFractionSYL->numSYL /= gcdNumSYL;
        newFractionSYL->denomSYL /= gcdNumSYL;
        newFractionSYL->numSYL = -newFractionSYL->numSYL;
    } else if (gcdNumSYL >= 1 && numSignSYL == 1 && denomSignSYL == -1){
        newFractionSYL->numSYL /= gcdNumSYL;
        newFractionSYL->denomSYL /= gcdNumSYL;
        newFractionSYL->numSYL = -newFractionSYL->numSYL;
    } else {
       newFractionSYL->numSYL /= gcdNumSYL;
       newFractionSYL->denomSYL /= gcdNumSYL;
    }
    return newFractionSYL;
}


