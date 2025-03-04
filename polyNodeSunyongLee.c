/**
 * Program Name: polyNodeSunyongLee.c
 * Discussion:   Implentation File
 *                 struct Fraction & Relevance
 * Written By:   Sunyong Lee
 * Date:         2024/05/26
 */

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "polyNodeSunyongLee.h"



struct PolyNodeSYL* createPolyNodeSYL(void){
    struct PolyNodeSYL* polyNodePtrSYL = NULL;
    
    polyNodePtrSYL = (struct PolyNodeSYL*)malloc(sizeof(struct PolyNodeSYL));
    
    polyNodePtrSYL->nextSYL = NULL;
    
    polyNodePtrSYL->termPtrSYL = createPolyTermSYL();
    
    return polyNodePtrSYL;
}

void displayPolynomialsforMainMenuSYL(struct PolyNodeSYL* polynomial) {
    int termIndex = 1;
    struct PolyNodeSYL* currentSYL = polynomial;
    int degree = findDegreeSYL(currentSYL);
    int numTerms = 0;
    while (currentSYL != NULL && currentSYL->termPtrSYL != NULL){
        numTerms++;
        currentSYL = currentSYL->nextSYL;
    }
    currentSYL = polynomial;
    
    printf("\n    Address: %p", currentSYL);
    printf("\n    Degree: %d", degree);
    printf("\n    Number of Terms: %d", numTerms);
    while (currentSYL != NULL && currentSYL->termPtrSYL != NULL) {
        printf("\n\n    Term #%d -", termIndex);
        printf("\n      Address: %p", currentSYL->termPtrSYL);
        printf("\n      Expo: %d", currentSYL->termPtrSYL->order);
        printf("\n      Coefficient - ");
        printf("\n        Address: %p", &(currentSYL->termPtrSYL->coeff));
        printf("\n        num: %d ", currentSYL->termPtrSYL->coeff.numSYL);
        printf("\n         denom: %d ", currentSYL->termPtrSYL->coeff.denomSYL);
        currentSYL = currentSYL->nextSYL;
        termIndex++;
    }
}

void displayPolynomialsforInitMenuSYL(struct PolyNodeSYL* polynomial) {
    int termIndex = 1;
    struct PolyNodeSYL* currentSYL = polynomial;
    int degree = findDegreeSYL(currentSYL);
    int numTerms = 0;
    while (currentSYL != NULL && currentSYL->termPtrSYL != NULL){
        numTerms++;
        currentSYL = currentSYL->nextSYL;
    }
    currentSYL = polynomial;
    
    printf("\n     Address: %p", currentSYL);
    printf("\n     Degree: %d", degree);
    printf("\n     Number of Terms: %d", numTerms);
    while (currentSYL != NULL && currentSYL->termPtrSYL != NULL) {
        printf("\n\n     Term #%d -", termIndex);
        printf("\n       Address: %p", currentSYL->termPtrSYL);
        printf("\n       Expo: %d", currentSYL->termPtrSYL->order);
        printf("\n       Coefficient - ");
        printf("\n         Address: %p", &(currentSYL->termPtrSYL->coeff));
        printf("\n         num: %d ", currentSYL->termPtrSYL->coeff.numSYL);
        printf("\n         denom: %d ", currentSYL->termPtrSYL->coeff.denomSYL);
        currentSYL = currentSYL->nextSYL;
        termIndex++;
    }
}

void displayPolynomialsforCreateSubMenuSYL(struct PolyNodeSYL* polynomial) {
    int termIndex = 1;
    struct PolyNodeSYL* currentSYL = polynomial;
    int degree = findDegreeSYL(currentSYL);
    int numTerms = 0;
    while (currentSYL != NULL && currentSYL->termPtrSYL != NULL){
        numTerms++;
        currentSYL = currentSYL->nextSYL;
    }
    currentSYL = polynomial;
    
    printf("\n         Address: %p", currentSYL);
    printf("\n         Degree: %d", degree);
    printf("\n         Number of Terms: %d", numTerms);
    while (currentSYL != NULL && currentSYL->termPtrSYL != NULL) {
        printf("\n\n         Term #%d -", termIndex);
        printf("\n           Address: %p", currentSYL->termPtrSYL);
        printf("\n           Expo: %d", currentSYL->termPtrSYL->order);
        printf("\n           Coefficient - ");
        printf("\n             Address: %p", &(currentSYL->termPtrSYL->coeff));
        printf("\n             num: %d ", currentSYL->termPtrSYL->coeff.numSYL);
        printf("\n             denom: %d ", currentSYL->termPtrSYL->coeff.denomSYL);
        currentSYL = currentSYL->nextSYL;
        termIndex++;
    }
}
void displayPolynomialsforUpdateSubMenuSYL(struct PolyNodeSYL* polynomial){
    int termIndex = 1;
    struct PolyNodeSYL* currentSYL = polynomial;
    int degree = findDegreeSYL(currentSYL);
    int numTerms = 0;
    while (currentSYL != NULL && currentSYL->termPtrSYL != NULL){
        numTerms++;
        currentSYL = currentSYL->nextSYL;
    }
    currentSYL = polynomial;
    
    printf("\n         Address: %p", currentSYL);
    printf("\n         Degree: %d", degree);
    printf("\n         Number of Terms: %d", numTerms);
    while (currentSYL != NULL && currentSYL->termPtrSYL != NULL) {
        printf("\n\n         Term #%d -", termIndex);
        printf("\n             Address: %p", currentSYL->termPtrSYL);
        printf("\n             Expo: %d", currentSYL->termPtrSYL->order);
        printf("\n             Coefficient - ");
        printf("\n                 Address: %p", &(currentSYL->termPtrSYL->coeff));
        printf("\n                 num: %d ", currentSYL->termPtrSYL->coeff.numSYL);
        printf("\n                 denom: %d ", currentSYL->termPtrSYL->coeff.denomSYL);
        currentSYL = currentSYL->nextSYL;
        termIndex++;
    }
}
void displayResultPolynomialsSYL(struct PolyNodeSYL* polynomial){
    struct PolyNodeSYL* currentSYL = polynomial;
    int degree = findDegreeSYL(currentSYL);
    int numTerms = 0;
    while (currentSYL != NULL && currentSYL->termPtrSYL != NULL){
        numTerms++;
        currentSYL = currentSYL->nextSYL;
    }
    currentSYL = polynomial;
    
    printf("\n    Address: %p", currentSYL);
    printf("\n    Degree: %d", degree);
    printf("\n    Number of Terms: %d", numTerms);
}


int findDegreeSYL (struct PolyNodeSYL* polynomial){
    struct PolyNodeSYL* currentSYL = polynomial;
    int highestNum = -1;
    
    if (currentSYL== NULL || currentSYL ->termPtrSYL == NULL){
        return highestNum;
    }
    else {
        highestNum = currentSYL->termPtrSYL->order;
    }
    
    while (currentSYL != NULL){
        if (currentSYL->nextSYL != NULL && currentSYL->nextSYL->termPtrSYL !=NULL && currentSYL->nextSYL->termPtrSYL->order > highestNum){
            highestNum = currentSYL->nextSYL->termPtrSYL->order;
        }
        currentSYL = currentSYL->nextSYL;
    }
    return highestNum;
}
