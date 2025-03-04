/**
 * Program Name: cis27Spring2024Hw3UtilitySunyongLee.c
 * Discussion:   Implentation File
 *                 Homework 3
 * Written By:   Sunyong Lee
 * Date:         2024/05/23
 */



// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "fractionSunyongLee.h"
#include "polyNodeSunyongLee.h"
#include "polyNodeUtilitySunyongLee.h"
#include "fractionUtilitySunyongLee.h"
#include "cis27Spring2024Hw3UtilitySunyongLee.h"

void displayCodingStatementSYL(void){
    printf("We write code to manipulate data (which are"
           "\nprovided by the user) to produce the required"
           "\noutcome in the most efficient way!");
}
void displayClassInfoSYL(void){
    printf("\n\nCIS 27 - Data Structures and Algorithms"
           "\nLaney College"
           "\nSunyong Lee"
           "\n"
           "\nInformation --"
           "\n  Assignment:              HW #3 Exercise #1"
           "\n  Implemented by:          Sunyong Lee"
           "\n  Required Sumission Data: 2024/05/26"
           "\n  Actual Submission Data:  2024/05/26\n");
}

void runMenuHw3SYL(void){
    int mainusrInputSYL;
    struct PolyNodeSYL* polyNodeSYL1 = NULL;
    struct PolyNodeSYL* polyNodeSYL2 = NULL;
    struct PolyNodeSYL* addResultSYL = NULL;
    struct PolyNodeSYL* multiplyingResultSYL = NULL;
    displayCodingStatementSYL();
    displayClassInfoSYL();
    do {
        printf("\n****************************************"
               "\n*             MENU - HW #3             *"
               "\n* (1) Creating/Updating 2 Polynomials  *"
               "\n* (2) Evaluating 2 Polynomials         *"
               "\n* (3) Adding 2 Polynomials             *"
               "\n* (4) Multiplying 2 Polynomials        *"
               "\n* (5) Displaying 2 Polynomials         *"
               "\n* (6) Displaying Resulting Polynomials *"
               "\n* (7) Quit                             *"
               "\n****************************************");
        printf("\nEnter an integer for option + ENTER: ");
        scanf("%d", &mainusrInputSYL);
    switch (mainusrInputSYL){
        case 1:
            printf("\n Initializing 2 Polynomials - "
            "\n\n   Calling init() -");
            initSubmenuSYL(&polyNodeSYL1, &polyNodeSYL2);
            break;
        case 2:
            printf("\n Evaluating Polynomials - ");
            evaluatePolynomialSYL(polyNodeSYL1, polyNodeSYL2);
            break;
        case 3:
            printf("\n Adding 2 Polynomials - ");
            if (addResultSYL != NULL){
                removePolyASYL(&addResultSYL);
            }
            addResultSYL = addPolynomials(polyNodeSYL1, polyNodeSYL2);
            displayPolynomialsforMainMenuSYL(addResultSYL);
            if (addResultSYL == NULL){
                printf("Error occurred while adding polynomials.\n");
            }
            break;
        case 4:
            printf("multiplying 2 Polynomials -");
            if (multiplyingResultSYL != NULL){
                removePolyASYL(&multiplyingResultSYL);
            }
            multiplyingResultSYL = multiplyingPolynomials(polyNodeSYL1, polyNodeSYL2);
            
            break;
        case 5:
            printf("\n  Displaying 2 Polynomials -\n");
            printf("\n  Poly #1");
            displayPolynomialsforMainMenuSYL(polyNodeSYL1);
            printf("\n  Poly #2");
            displayPolynomialsforMainMenuSYL(polyNodeSYL2);
            break;
        case 6:
            if (multiplyingResultSYL != NULL){
                displayResultPolynomialsSYL(multiplyingResultSYL);
            } else{
                printf("\n  Not appropriate as there are no Polynomials!\n");
                
            }
            break;
        case 7:
            removePolyASYL(&polyNodeSYL1);
            removePolyASYL(&polyNodeSYL2);
            printf("\n  All objects have been removed/deleted through calls to free()!"
                   "\n\nHave fun!");
            break;
        default:
            printf("\nWrong Option!\n");

        }
    } while (mainusrInputSYL != 7);
}


void initSubmenuSYL(struct PolyNodeSYL** polyNodeSYL1, struct PolyNodeSYL** polyNodeSYL2){
    int subusrInputSYL;
    do {
        printf("\n\n   ********************************"
               "\n   *       init() Submenu         *"
               "\n   * (1) Creating 2 Polynomials   *"
               "\n   * (2) Updating Polynomial 1    *"
               "\n   * (3) Updating Polynomial 2    *"
               "\n   * (4) Displaying 2 Polynomials *"
               "\n   * (5) Return                   *"
               "\n   *******************************");
        printf("\n   Enter an integer for option + ENTER: ");
        scanf("%d", &subusrInputSYL);
        switch (subusrInputSYL){
            case 1:
                printf("\n   Creating 2 Polynomials  -"
                       "\n\n     Calling create() - ");
                createSubmenuSYL(polyNodeSYL1, polyNodeSYL2);
                break;
            case 2:
                if(*polyNodeSYL1 == NULL){
                    printf("\n   Not appropriate as ther are no Polynomials!");
                } else{
                    printf("\n   Updating Polynomial #1\n");
                    updateSubmenuofFirst(polyNodeSYL1);
                }
                break;
            case 3:
                if(*polyNodeSYL2 == NULL){
                    printf("\n   Not appropriate as ther are no Polynomials!");
                } else {
                    printf("\n   Updating Polynomial #2\n");
                    updateSubmenuofSecond(polyNodeSYL2);
                }
                break;
            case 4:
                if (*polyNodeSYL1 == NULL && *polyNodeSYL2 == NULL){
                    printf("\n   Wrong Option!");
                }
                else {
                    printf("\n   Displaying 2 Polynomials - ");
                    printf("\n   Poly #1 -");
                    displayPolynomialsforInitMenuSYL(*polyNodeSYL1);
                    printf("\n\n   Poly #2 -");
                    displayPolynomialsforInitMenuSYL(*polyNodeSYL2);
                }
                break;
            case 5:
                printf("\n   Return to previous menu!");
                break;
            default:
                printf("\n   Wrong Option!");
        }
    } while (subusrInputSYL != 5);
}
void createSubmenuSYL(struct PolyNodeSYL** polyNodeSYL1, struct PolyNodeSYL** polyNodeSYL2){
    int createSubusrInputSYL;
    do {
        printf("\n\n       ********************************"
               "\n       *       create() Submenu       *"
               "\n       * (1) Creating 2 Polynomials   *"
               "\n       * (2) Displaying 2 Polynomials *"
               "\n       * (3) Return                   *"
               "\n       *******************************");
        printf("\n       Enter an integer for option + ENTER: ");
        scanf("%d", &createSubusrInputSYL);
        switch (createSubusrInputSYL){
            case 1:
                printf("\n       Removing existing 2 Poly if existing");
                if (polyNodeSYL1 != NULL || polyNodeSYL2 != NULL){
                    removePolyASYL(polyNodeSYL1);
                    removePolyASYL(polyNodeSYL2);
                }
                printf("\n\n        Creating 2 new poly"
                       "\n\n          Creating Poly #1 - ");
                *polyNodeSYL1 = createPolySYL();
                printf("\n          Creating Poly #2 - ");
                *polyNodeSYL2 = createPolySYL();
                break;
            case 2:
                printf("\n       Displaying 2 Polynomials - ");
                printf("\n       Poly #1 -");
                displayPolynomialsforCreateSubMenuSYL(*polyNodeSYL1);
                printf("\n\n       Poly #2 -");
                displayPolynomialsforCreateSubMenuSYL(*polyNodeSYL2);
                break;
            case 3:
                printf("\n   Return to previous menu!");
                break;
            default:
                printf("\n   Wrong Option!");
        }
    } while (createSubusrInputSYL != 3);
}




void updateSubmenuofFirst(struct PolyNodeSYL** polyNodeSYL){
    int updateInputSYL;
    int nodeNumber;
    int orderToRemoveSYL;
    struct PolyNodeSYL* currentSYL = *polyNodeSYL;
    
    do {
        printf("\n      *************************************"
               "\n      *         update() Submenu          *"
               "\n      * (1) Adding one term               *"
               "\n      * (2) Removing one term             *"
               "\n      * (3) Displaying updated Polynomial *"
               "\n      * (4) return                        *"
               "\n      *************************************");
        printf("\n      Enter an integer for option + ENTER: ");
        scanf("%d", &updateInputSYL);
        switch (updateInputSYL){
            case 1:
                printf("\n        Adding 1 term -\n");
                struct PolyNodeSYL* newNode = (struct PolyNodeSYL*)malloc(sizeof(struct PolyNodeSYL));
                if (newNode == NULL) {
                    printf("Memory allocation failed.\n");
                    return;
                }
                newNode->termPtrSYL = createPolyTermSYL();
                if (newNode->termPtrSYL == NULL){
                    printf("Failed to create polynomial term. \n");
                    free(newNode);
                    return;
                }
                newNode->nextSYL = NULL;
                nodeNumber = searchNodeSYL(newNode, currentSYL);
                insertNodeSYL(nodeNumber, newNode, &currentSYL);
                break;
            case 2:
                printf("\n      Enter the order of the term to remove: ");
                scanf("%d", &orderToRemoveSYL);
                removeNodeByOrderSYL(&currentSYL, orderToRemoveSYL);
                break;
            case 3:
                displayPolynomialsforUpdateSubMenuSYL(currentSYL);
                break;
            case 4:
                printf("\n      Return to previous menu!");
                break;
            default:
                printf("\n   Wrong Option!");
        }
    } while (updateInputSYL != 4);
    
}

void updateSubmenuofSecond(struct PolyNodeSYL** polyNodeSYL){
    int updateInputSYL;
    int nodeNumber;
    int orderToRemoveSYL;
    struct PolyNodeSYL* currentSYL = *polyNodeSYL;
    
    do {
        printf("\n      *************************************"
               "\n      *         update() Submenu          *"
               "\n      * (1) Adding one term               *"
               "\n      * (2) Removing one term             *"
               "\n      * (3) Displaying updated Polynomial *"
               "\n      * (4) return                        *"
               "\n      *************************************");
        printf("\n      Enter an integer for option + ENTER: ");
        scanf("%d", &updateInputSYL);
        switch (updateInputSYL){
            case 1:
                printf("\n        Adding 2 term -\n");
                struct PolyNodeSYL* newNode = (struct PolyNodeSYL*)malloc(sizeof(struct PolyNodeSYL));
                if (newNode == NULL) {
                    printf("Memory allocation failed.\n");
                    return;
                }
                
                newNode->termPtrSYL = createPolyTermSYL();
                if (newNode->termPtrSYL == NULL){
                    printf("Failed to create polynomial term. \n");
                    free(newNode);
                    return;
                }
                newNode->nextSYL = NULL;
                nodeNumber = searchNodeSYL(newNode, currentSYL);
                insertNodeSYL(nodeNumber, newNode, &currentSYL);
                break;
            case 2:
                printf("\n      Enter the order of the term to remove: ");
                scanf("%d", &orderToRemoveSYL);
                removeNodeByOrderSYL(&currentSYL, orderToRemoveSYL);
                break;
            case 3:
                displayPolynomialsforUpdateSubMenuSYL(currentSYL);
                break;
            case 4:
                printf("\n      Return to previous menu!");
                break;
            default:
                printf("\n   Wrong Option!");
        }
    } while (updateInputSYL != 4);
    
}
struct PolyNodeSYL* multiplyingPolynomials(struct PolyNodeSYL* polyNodeSYL1, struct PolyNodeSYL* polyNodeSYL2){
    struct PolyNodeSYL* resultSYL = NULL;
    struct PolyNodeSYL* resultTail = NULL;
    struct PolyNodeSYL* currentSYL1 = polyNodeSYL1;
    struct PolyNodeSYL* currentSYL2 = polyNodeSYL2;
    int resultCoeffNumSYL;
    
    while(currentSYL1 != NULL){
        currentSYL2 = polyNodeSYL2;
        while(currentSYL2 != NULL){
            int orderSYL = currentSYL1->termPtrSYL->order + currentSYL2->termPtrSYL->order;
            int numSYL = currentSYL1->termPtrSYL->coeff.numSYL * currentSYL2->termPtrSYL->coeff.numSYL;
            int denomSYL = currentSYL1->termPtrSYL->coeff.denomSYL * currentSYL2->termPtrSYL->coeff.denomSYL;
            if (resultSYL == NULL){
                resultSYL = (struct PolyNodeSYL*)malloc(sizeof(struct PolyNodeSYL));
                if (resultSYL == NULL){
                    printf("Memory allocation failed\n");
                    exit(1);
                } else {
                    resultSYL->termPtrSYL = (struct PolyTermSYL*)malloc(sizeof(struct PolyTermSYL));
                    if (resultSYL->termPtrSYL ==NULL){
                        printf("Memory allocation failed\n");
                        free(resultSYL);
                        exit(1);
                    }
                    resultSYL->termPtrSYL->order = currentSYL1->termPtrSYL->order + currentSYL2->termPtrSYL->order;
                    resultSYL->termPtrSYL->coeff.numSYL = currentSYL1->termPtrSYL->coeff.numSYL * currentSYL2->termPtrSYL->coeff.numSYL;
                    resultSYL->termPtrSYL->coeff.denomSYL = currentSYL1->termPtrSYL->coeff.denomSYL * currentSYL2->termPtrSYL->coeff.denomSYL;
                    resultTail = resultSYL;
                    resultTail->nextSYL = (struct PolyNodeSYL*)malloc(sizeof(struct PolyNodeSYL));
                    if(resultTail->nextSYL == NULL){
                        printf("Memory allocation failed\n");
                        free(resultSYL->termPtrSYL);
                        free(resultSYL);
                        exit(1);
                    }
                    resultTail = resultTail->nextSYL;
                    currentSYL2 = currentSYL2->nextSYL;
                }
            } else {
                struct PolyNodeSYL* existingTermSYL = resultSYL;
                struct PolyNodeSYL* prevTermSYL = NULL;
                while (existingTermSYL->termPtrSYL != NULL){
                    if (existingTermSYL->termPtrSYL->order == orderSYL){
                        resultCoeffNumSYL = existingTermSYL->termPtrSYL->coeff.numSYL*denomSYL+existingTermSYL->termPtrSYL->coeff.denomSYL*numSYL;
                        if (resultCoeffNumSYL != 0){
                            existingTermSYL->termPtrSYL->order = orderSYL;
                            existingTermSYL->termPtrSYL->coeff.numSYL = resultCoeffNumSYL;
                            existingTermSYL->termPtrSYL->coeff.denomSYL = existingTermSYL->termPtrSYL->coeff.denomSYL*denomSYL;
                            currentSYL2 = currentSYL2->nextSYL;
                            break;
                        } else {
                            struct PolyNodeSYL* tempSYL = existingTermSYL;
                            if(prevTermSYL == NULL) {
                                resultSYL = existingTermSYL->nextSYL;
                            } else {
                                prevTermSYL->nextSYL = existingTermSYL->nextSYL;
                            }
                            free(tempSYL->termPtrSYL);
                            free(tempSYL);
                            currentSYL2 = currentSYL2->nextSYL;
                            break;
                        }
                    }
                    prevTermSYL = existingTermSYL;
                    existingTermSYL = existingTermSYL->nextSYL;
                }
              if (existingTermSYL->termPtrSYL != NULL){
                  continue;
                }
                resultTail->termPtrSYL = (struct PolyTermSYL*)malloc(sizeof(struct PolyTermSYL));
                if (resultTail->termPtrSYL == NULL){
                    printf("Memory allocation failed\n");
                    free(resultSYL->nextSYL);
                    free(resultSYL->termPtrSYL);
                    free(resultSYL);
                    exit(1);
                }
                resultTail->termPtrSYL->order = currentSYL1->termPtrSYL->order + currentSYL2->termPtrSYL->order;
                resultTail->termPtrSYL->coeff.numSYL = currentSYL1->termPtrSYL->coeff.numSYL*currentSYL2->termPtrSYL->coeff.numSYL;
                resultTail->termPtrSYL->coeff.denomSYL = currentSYL1->termPtrSYL->coeff.denomSYL*currentSYL2->termPtrSYL->coeff.denomSYL;

                resultTail->nextSYL = (struct PolyNodeSYL*)malloc(sizeof(struct PolyNodeSYL));
                if (resultTail->nextSYL == NULL){
                    printf("Memory allocation failed\n");
                    free(resultSYL->nextSYL);
                    free(resultSYL->termPtrSYL);
                    free(resultSYL);
                    exit(1);
                }
                resultTail = resultTail->nextSYL;
                currentSYL2 = currentSYL2->nextSYL;

            }
        }
        currentSYL1 = currentSYL1->nextSYL;
    }
    struct PolyNodeSYL* PolynomialsSYL = resultSYL;
    while(PolynomialsSYL->termPtrSYL != NULL){
        reduceFractionSYL(&PolynomialsSYL->termPtrSYL->coeff.numSYL, &PolynomialsSYL->termPtrSYL->coeff.denomSYL);
        PolynomialsSYL = PolynomialsSYL->nextSYL;
    }
    sortPolynomialSYL(&resultSYL);
    displayPolynomialsforMainMenuSYL(resultSYL);
    return resultSYL;
}

struct PolyNodeSYL* addPolynomials(struct PolyNodeSYL* polyNodeSYL1, struct PolyNodeSYL* polyNodeSYL2) {
    struct PolyNodeSYL* resultSYL = NULL;
    struct PolyNodeSYL* resultTail = NULL;
    struct PolyNodeSYL* currentSYL1 = polyNodeSYL1;
    struct PolyNodeSYL* currentSYL2 = polyNodeSYL2;
    int resultCoeffNumSYL;

    while (currentSYL1 != NULL && currentSYL2 != NULL) {
        if (resultSYL == NULL) {
            resultSYL = (struct PolyNodeSYL*)malloc(sizeof(struct PolyNodeSYL));
            if (resultSYL == NULL) {
                printf("Memory allocation failed.\n");
                exit(1);
            }
            resultSYL->termPtrSYL = NULL;
            resultSYL->nextSYL = NULL;
            resultTail = resultSYL;
        } else {
            resultTail->nextSYL = (struct PolyNodeSYL*)malloc(sizeof(struct PolyNodeSYL));
            if (resultTail->nextSYL == NULL) {
                printf("Memory allocation failed.\n");
                exit(1);
            }
            resultTail = resultTail->nextSYL;
            resultTail->termPtrSYL = NULL;
            resultTail->nextSYL = NULL;
        }
        if (currentSYL1->termPtrSYL->order == currentSYL2->termPtrSYL->order) {
            resultCoeffNumSYL = currentSYL1->termPtrSYL->coeff.numSYL * currentSYL2->termPtrSYL->coeff.denomSYL +
            currentSYL1->termPtrSYL->coeff.denomSYL * currentSYL2->termPtrSYL->coeff.numSYL;
            if (resultCoeffNumSYL != 0){
                if (resultTail->termPtrSYL == NULL){
                    resultTail->termPtrSYL = (struct PolyTermSYL*)malloc(sizeof(struct PolyTermSYL));
                    if (resultTail->termPtrSYL == NULL){
                        printf("Memory allocation failed.\n");
                        exit(1);
                    }
                    ///===수정본
                    resultTail->termPtrSYL->order = currentSYL1->termPtrSYL->order;
                    resultTail->termPtrSYL->coeff.numSYL = resultCoeffNumSYL;
                    resultTail->termPtrSYL->coeff.denomSYL = currentSYL1->termPtrSYL->coeff.denomSYL * currentSYL2->termPtrSYL->coeff.denomSYL;
                    currentSYL1 = currentSYL1->nextSYL;
                    currentSYL2 = currentSYL2->nextSYL;
                }
            } else {
                currentSYL1 = currentSYL1->nextSYL;
                currentSYL2 = currentSYL2->nextSYL;
            }
            
        } else if (currentSYL1->termPtrSYL->order > currentSYL2->termPtrSYL->order) {
            if (resultTail->termPtrSYL == NULL) {
                resultTail->termPtrSYL = (struct PolyTermSYL*)malloc(sizeof(struct PolyTermSYL));
                if (resultTail->termPtrSYL == NULL) {
                    printf("Memory allocation failed.\n");
                    exit(1);
                }
            }
            resultTail->termPtrSYL->order = currentSYL1->termPtrSYL->order;
            resultTail->termPtrSYL->coeff.numSYL = currentSYL1->termPtrSYL->coeff.numSYL;
            resultTail->termPtrSYL->coeff.denomSYL = currentSYL1->termPtrSYL->coeff.denomSYL;
            currentSYL1 = currentSYL1->nextSYL;
        } else {
            if (resultTail->termPtrSYL == NULL) {
                resultTail->termPtrSYL = (struct PolyTermSYL*)malloc(sizeof(struct PolyTermSYL));
                if (resultTail->termPtrSYL == NULL) {
                    printf("Memory allocation failed.\n");
                    exit(1);
                }
            }
            resultTail->termPtrSYL->order = currentSYL2->termPtrSYL->order;
            resultTail->termPtrSYL->coeff.numSYL = currentSYL2->termPtrSYL->coeff.numSYL;
            resultTail->termPtrSYL->coeff.denomSYL = currentSYL2->termPtrSYL->coeff.denomSYL;
            currentSYL2 = currentSYL2->nextSYL;
        }
    }
    while (currentSYL1 != NULL){
        if (resultSYL == NULL) {
            resultSYL = (struct PolyNodeSYL*)malloc(sizeof(struct PolyNodeSYL));
            if (resultSYL == NULL) {
                printf("Memory allocation failed.\n");
                exit(1);
            }
            resultSYL->termPtrSYL = NULL;
            resultSYL->nextSYL = NULL;
            resultTail = resultSYL;
        } else {
            resultTail->nextSYL = (struct PolyNodeSYL*)malloc(sizeof(struct PolyNodeSYL));
            if (resultTail->nextSYL == NULL) {
                printf("Memory allocation failed.\n");
                exit(1);
            }
            resultTail = resultTail->nextSYL;
            resultTail->termPtrSYL = NULL;
            resultTail->nextSYL = NULL;
        }
        if (resultTail->termPtrSYL == NULL) {
            resultTail->termPtrSYL = (struct PolyTermSYL*)malloc(sizeof(struct PolyTermSYL));
            if(resultTail->termPtrSYL == NULL) {
                printf("Memory allocation failed.\n");
                exit(1);
            }
            resultTail->termPtrSYL->order = currentSYL1->termPtrSYL->order;
            resultTail->termPtrSYL->coeff.numSYL = currentSYL1->termPtrSYL->coeff.numSYL;
            resultTail->termPtrSYL->coeff.denomSYL = currentSYL1->termPtrSYL->coeff.denomSYL;
            currentSYL1 = currentSYL1->nextSYL;
        }
    }
    while (currentSYL2 != NULL){
        if (resultSYL == NULL) {
            resultSYL = (struct PolyNodeSYL*)malloc(sizeof(struct PolyNodeSYL));
            if (resultSYL == NULL) {
                printf("Memory allocation failed.\n");
                exit(1);
            }
            resultSYL->termPtrSYL = NULL;
            resultSYL->nextSYL = NULL;
            resultTail = resultSYL;
        } else {
            resultTail->nextSYL = (struct PolyNodeSYL*)malloc(sizeof(struct PolyNodeSYL));
            if (resultTail->nextSYL == NULL) {
                printf("Memory allocation failed.\n");
                exit(1);
            }
            resultTail = resultTail->nextSYL;
            resultTail->termPtrSYL = NULL;
            resultTail->nextSYL = NULL;
        }
        if (resultTail->termPtrSYL == NULL) {
            resultTail->termPtrSYL = (struct PolyTermSYL*)malloc(sizeof(struct PolyTermSYL));
            if(resultTail->termPtrSYL == NULL) {
                printf("Memory allocation failed.\n");
                exit(1);
            }
            resultTail->termPtrSYL->order = currentSYL2->termPtrSYL->order;
            resultTail->termPtrSYL->coeff.numSYL = currentSYL2->termPtrSYL->coeff.numSYL;
            resultTail->termPtrSYL->coeff.denomSYL = currentSYL2->termPtrSYL->coeff.denomSYL;
            currentSYL2 = currentSYL2->nextSYL;
        }
    }
    return resultSYL;
}



int NumOfNodeSYL(struct PolyNodeSYL* polyNodeSYL){
    int maxNumSYL = 0;
    struct PolyNodeSYL* currentNodeSYL = polyNodeSYL;
    
    while (currentNodeSYL != NULL && currentNodeSYL->termPtrSYL != NULL){
        maxNumSYL++;
        currentNodeSYL = currentNodeSYL->nextSYL;
    }
    
    return maxNumSYL;
}
int MaxNumOfNodeSYL(int numOfNode1SYL, int numOfNode2SYL){
    if (numOfNode1SYL >= numOfNode2SYL){
        return numOfNode1SYL;
    }
    else {
        return numOfNode2SYL;
    }
}

int intPowSYL(int base, int exponent){
    if (exponent == 0)
        return 1;
    else if (exponent % 2 ==0)
        return intPowSYL(base * base, exponent / 2);
    else
        return base * intPowSYL(base, exponent - 1);
}

void reduceFractionSYL(int *numerator, int *denominator){
    int gcdResultSYL = gcdSYL(*numerator, *denominator);
    *numerator /= gcdResultSYL;
    *denominator /= gcdResultSYL;
    if (*denominator <0){
        *numerator *= -1;
        *denominator *= -1;
    }
}


void evaluatePolynomialSYL(struct PolyNodeSYL* polyNodeSYL1, struct PolyNodeSYL* polyNodeSYL2){
    TdFractionSYL result1SYL = {0, 0};
    TdFractionSYL result2SYL = {0, 0};
    int lcm1SYL;
    int lcm2SYL;
    int numOfNode1SYL = NumOfNodeSYL(polyNodeSYL1);
    int numOfNode2SYL = NumOfNodeSYL(polyNodeSYL2);
    int maxNumOfNodeSYL = MaxNumOfNodeSYL(numOfNode1SYL, numOfNode2SYL);
    struct PolyNodeSYL* currentNode1SYL = polyNodeSYL1;
    struct PolyNodeSYL* currentNode2SYL = polyNodeSYL2;
    TdFractionPtrSYL** arrOfPolynomialsSYL = NULL;
    TdFractionAddrSYL valueSYL = (TdFractionAddrSYL)malloc(sizeof(TdFractionSYL));
    
    printf("\n\n    Enter the value (Fraction) to be evaluated with - ");
    printf("\n      num: ");
    scanf("%d", &valueSYL->numSYL);
    printf("      denom: ");
    scanf("%d", &valueSYL->denomSYL);
    
    arrOfPolynomialsSYL = (TdFractionPtrSYL**)malloc(2 * sizeof(TdFractionPtrSYL*));
    if (arrOfPolynomialsSYL == NULL) {
        printf("Error");
        return;
    }
    
    for (int i = 0; i < 2; ++i){
        arrOfPolynomialsSYL[i] = (TdFractionPtrSYL*)malloc(maxNumOfNodeSYL * sizeof(TdFractionPtrSYL));
        if (arrOfPolynomialsSYL[i] == NULL) {
            printf("Error");
            return;
        }
        for (int j = 0; j < maxNumOfNodeSYL; ++j){
            arrOfPolynomialsSYL[i][j] = (TdFractionPtrSYL)malloc(sizeof(TdFractionSYL));
            if (arrOfPolynomialsSYL[i][j] == NULL){
                printf("Error");
                return;
            }
        }
    }
    
    for (int i =0; i < numOfNode1SYL; ++i){
        if (arrOfPolynomialsSYL[0][i] != NULL){
            if (currentNode1SYL->termPtrSYL->order == 0){
                arrOfPolynomialsSYL[0][i]->numSYL = currentNode1SYL->termPtrSYL->coeff.numSYL;
                arrOfPolynomialsSYL[0][i]->denomSYL = currentNode1SYL->termPtrSYL->coeff.denomSYL;
            } else if (currentNode1SYL->termPtrSYL->order == 1){
                arrOfPolynomialsSYL[0][i]->numSYL = currentNode1SYL->termPtrSYL->coeff.numSYL*valueSYL->numSYL;
                arrOfPolynomialsSYL[0][i]->denomSYL = currentNode1SYL->termPtrSYL->coeff.denomSYL*valueSYL->denomSYL;
            } else {
                arrOfPolynomialsSYL[0][i]->numSYL = currentNode1SYL->termPtrSYL->coeff.numSYL*intPowSYL(valueSYL->numSYL, currentNode1SYL->termPtrSYL->order);
                arrOfPolynomialsSYL[0][i]->denomSYL = currentNode1SYL->termPtrSYL->coeff.denomSYL*intPowSYL(valueSYL->denomSYL,currentNode1SYL->termPtrSYL->order);
            }
            currentNode1SYL = currentNode1SYL->nextSYL;
        }
    }
   
    for (int i =0; i < numOfNode2SYL; ++i){
        if (arrOfPolynomialsSYL[1][i] != NULL){
            if (currentNode2SYL->termPtrSYL->order == 0){
                arrOfPolynomialsSYL[1][i]->numSYL = currentNode2SYL->termPtrSYL->coeff.numSYL;
                arrOfPolynomialsSYL[1][i]->denomSYL = currentNode2SYL->termPtrSYL->coeff.denomSYL;
            } else if (currentNode2SYL->termPtrSYL->order == 1){
                arrOfPolynomialsSYL[1][i]->numSYL = currentNode2SYL->termPtrSYL->coeff.numSYL*valueSYL->numSYL;
                arrOfPolynomialsSYL[1][i]->denomSYL = currentNode2SYL->termPtrSYL->coeff.denomSYL*valueSYL->denomSYL;
            } else {
                arrOfPolynomialsSYL[1][i]->numSYL = currentNode2SYL->termPtrSYL->coeff.numSYL*intPowSYL(valueSYL->numSYL, currentNode2SYL->termPtrSYL->order);
                arrOfPolynomialsSYL[1][i]->denomSYL = currentNode2SYL->termPtrSYL->coeff.denomSYL*intPowSYL(valueSYL->denomSYL,currentNode2SYL->termPtrSYL->order);
            }
            currentNode2SYL = currentNode2SYL->nextSYL;
        }
    }
    
    
    
    lcm1SYL = arrOfPolynomialsSYL[0][0]->denomSYL;
    lcm2SYL = arrOfPolynomialsSYL[1][0]->denomSYL;
    for (int i = 1; i < numOfNode1SYL; ++i){
        if (arrOfPolynomialsSYL[0][i] != NULL){
            lcm1SYL = (lcm1SYL * arrOfPolynomialsSYL[0][i]->denomSYL) / gcdSYL(lcm1SYL, arrOfPolynomialsSYL[0][i]->denomSYL);
        }
    }
    for (int i = 0; i< numOfNode1SYL; ++i){
        if (arrOfPolynomialsSYL[0][i] != NULL){
            arrOfPolynomialsSYL[0][i]->numSYL *= lcm1SYL / arrOfPolynomialsSYL[0][i]->denomSYL;
            arrOfPolynomialsSYL[0][i]->denomSYL = lcm1SYL;
        }
    }
    
    for (int i =0; i < numOfNode1SYL; ++i){
        if(arrOfPolynomialsSYL[0][i] != NULL){
            result1SYL.numSYL += arrOfPolynomialsSYL[0][i]->numSYL;
        }
    }

    for (int i = 1; i < numOfNode2SYL; ++i){
        if (arrOfPolynomialsSYL[1][i] != NULL){
            lcm2SYL = (lcm2SYL * arrOfPolynomialsSYL[1][i]->denomSYL) / gcdSYL(lcm2SYL, arrOfPolynomialsSYL[1][i]->denomSYL);
        }
    }
    for (int i = 0; i< numOfNode2SYL; ++i){
        if (arrOfPolynomialsSYL[1][i] != NULL){
            arrOfPolynomialsSYL[1][i]->numSYL *= lcm2SYL / arrOfPolynomialsSYL[1][i]->denomSYL;
            arrOfPolynomialsSYL[1][i]->denomSYL = lcm2SYL;
        }
    }
    
    for (int i =0; i < numOfNode2SYL; ++i){
        if(arrOfPolynomialsSYL[1][i] != NULL){
            result2SYL.numSYL += arrOfPolynomialsSYL[1][i]->numSYL;
        }
    }
    
    reduceFractionSYL(&result1SYL.numSYL, &lcm1SYL);
    reduceFractionSYL(&result2SYL.numSYL, &lcm2SYL);
    printf("\n    Poly #1 at x (%d/%d): (%d/%d)", valueSYL->numSYL, valueSYL->denomSYL, result1SYL.numSYL, lcm1SYL);
    printf("\n    Poly #2 at x (%d/%d): (%d/%d)", valueSYL->numSYL, valueSYL->denomSYL, result2SYL.numSYL, lcm2SYL);
    
    for (int i = 0; i < 2; ++i){
        for (int j =0; j<maxNumOfNodeSYL; ++j){
            free(arrOfPolynomialsSYL[i][j]);
        }
        free(arrOfPolynomialsSYL[i]);
    }
    free(arrOfPolynomialsSYL);
    free(valueSYL);
}


void sortPolynomialSYL(struct PolyNodeSYL** head) {
    struct PolyNodeSYL* sortedSYL = NULL;
    struct PolyNodeSYL* currentSYL = *head;

    while (currentSYL->termPtrSYL != NULL) {
        struct PolyNodeSYL* next = currentSYL->nextSYL;

        if (sortedSYL == NULL || sortedSYL->termPtrSYL->order <= currentSYL->termPtrSYL->order) {
            currentSYL->nextSYL = sortedSYL;
            sortedSYL = currentSYL;
        } else {
            struct PolyNodeSYL* tempSYL = sortedSYL;
            while (tempSYL->nextSYL != NULL && tempSYL->nextSYL->termPtrSYL->order > currentSYL->termPtrSYL->order) {
                tempSYL = tempSYL->nextSYL;
            }
            currentSYL->nextSYL = tempSYL->nextSYL;
            tempSYL->nextSYL = currentSYL;
        }

        currentSYL = next;
    }
    *head = sortedSYL;
}


