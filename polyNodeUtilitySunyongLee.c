/**
 * Program Name: polyNodeUtilitySunyongLee.c
 * Discussion:   Implentation File
 *                 struct Fraction & Relevance
 * Written By:   Sunyong Lee
 * Date:         2024/05/26
 */

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionSunyongLee.h"
#include "fractionUtilitySunyongLee.h"
#include "polyTermSunyongLee.h"
#include "polyNodeSunyongLee.h"
#include "polyNodeUtilitySunyongLee.h"

// Function Definitions

struct PolyNodeSYL* createPolySYL(void) {
    int makeTerms = 1;
    int nodeNumber = 0;
    struct PolyNodeSYL* head = NULL;
    struct PolyNodeSYL* currentSYL = NULL;

    while (makeTerms) {
        printf("\n          Is there a term (1 : yes, 0 : no)? ");
        if (scanf("%d", &makeTerms) != 1) {
            printf("\n           Invalid input. Please enter 0 or 1.\n");
            while (getchar() != '\n');
            continue;
        }

        if (makeTerms == 1) {
            struct PolyNodeSYL* newNode = (struct PolyNodeSYL*)malloc(sizeof(struct PolyNodeSYL));
            if (newNode == NULL) {
                printf("Memory allocation failed.\n");
                return head;
            } else {
                newNode = createPolyNodeSYL();
                
            }
            if (head == NULL) {
                head = newNode;
                currentSYL = head;
            } else {
                if (head != NULL && head->termPtrSYL != NULL && newNode != NULL && newNode->termPtrSYL != NULL){
                    nodeNumber = searchNodeSYL(newNode, head);
                }
                insertNodeSYL(nodeNumber, newNode, &head);
            }
        } else if (makeTerms != 0) {
            printf("          Invalid input. Please enter 0 or 1.\n");
        }
    }
    return head;
}

int searchNodeSYL(struct PolyNodeSYL* newNode, struct PolyNodeSYL* linkedlistHeadAddr){
    int nodeNumber = 0;
    struct PolyNodeSYL* currentSYL = linkedlistHeadAddr;
    
    while (currentSYL != NULL && currentSYL->termPtrSYL->order > newNode->termPtrSYL->order) {
            nodeNumber++;
            currentSYL = currentSYL->nextSYL;
        }
    return nodeNumber;
}



void addictionTwoFractionSYL(struct PolyNodeSYL* newNode, struct PolyNodeSYL** originalNode){
    
    struct PolyNodeSYL* tempNodeSYL = *originalNode;
    int gcd;
    
    tempNodeSYL->termPtrSYL->coeff.numSYL = (newNode->termPtrSYL->coeff.numSYL*tempNodeSYL->termPtrSYL->coeff.denomSYL)+(newNode->termPtrSYL->coeff.denomSYL*tempNodeSYL->termPtrSYL->coeff.numSYL);
    tempNodeSYL->termPtrSYL->coeff.denomSYL = newNode->termPtrSYL->coeff.denomSYL * tempNodeSYL->termPtrSYL->coeff.denomSYL;
    
    gcd = gcdSYL(tempNodeSYL->termPtrSYL->coeff.numSYL, tempNodeSYL->termPtrSYL->coeff.denomSYL);
    tempNodeSYL->termPtrSYL->coeff.numSYL /= gcd;
    tempNodeSYL->termPtrSYL->coeff.denomSYL /= gcd;
}
    



void insertNodeSYL(int nodeNumber, struct PolyNodeSYL* newNode, struct PolyNodeSYL** linkedlistHeadAddr){
    struct PolyNodeSYL* tempHeadAddr = *linkedlistHeadAddr;
    
    if(nodeNumber == 0){
        if (tempHeadAddr->termPtrSYL->order == newNode->termPtrSYL->order){
            addictionTwoFractionSYL(newNode, &tempHeadAddr);
        }
        else {
            newNode->nextSYL = tempHeadAddr;
            *linkedlistHeadAddr = newNode;
        }
    } else{
        for (int i =0; i < nodeNumber-1; i++){
            tempHeadAddr = tempHeadAddr->nextSYL;
        }
        if (tempHeadAddr->nextSYL != NULL && tempHeadAddr->nextSYL->termPtrSYL->order == newNode->termPtrSYL->order){
            addictionTwoFractionSYL(newNode, &tempHeadAddr);
            free(newNode);
        } else {
            
            if (tempHeadAddr->nextSYL == NULL){
                tempHeadAddr->nextSYL = newNode;
            } else {
                newNode->nextSYL = tempHeadAddr->nextSYL;
                tempHeadAddr->nextSYL = newNode;
            }
        }
        
    }
}
        
void removePolyASYL(struct PolyNodeSYL** polyAddrSYL) {
    struct PolyNodeSYL* currentNodePtrSYL = NULL;
    struct PolyNodeSYL* nextNodePtrSYL = NULL;

    currentNodePtrSYL = *polyAddrSYL;
    while (currentNodePtrSYL) {
        nextNodePtrSYL = currentNodePtrSYL->nextSYL;

        free(currentNodePtrSYL->termPtrSYL);
        free(currentNodePtrSYL);

        currentNodePtrSYL = nextNodePtrSYL;
    }

    *polyAddrSYL = NULL;
}

void removeNodeByOrderSYL(struct PolyNodeSYL** head, int order) {
    struct PolyNodeSYL* currentSYL = *head;
    struct PolyNodeSYL* previousSYL = NULL;

    while (currentSYL != NULL && currentSYL->termPtrSYL->order != order) {
        previousSYL = currentSYL;
        currentSYL = currentSYL->nextSYL;
    }

    if (currentSYL != NULL) {
        if (previousSYL == NULL) {
            *head = currentSYL->nextSYL;
        } else {
            previousSYL->nextSYL = currentSYL->nextSYL;
        }
        free(currentSYL->termPtrSYL);
        free(currentSYL);
        printf("\n      Node with order %d removed successfully.\n", order);
    } else {
        printf("\n      Node with order %d not found.\n", order);
    }
}
