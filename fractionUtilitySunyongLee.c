/**
 * Program Name: fractionUtilitySunyongLee.c
 * Discussion:   Specification File
 *                 Support Functions for Fraction
 * Written By:   Sunyong Lee
 * Date:         2024/05/26
 */
// Include/Header File(s)
#include <stdio.h>
#include <stdlib.h>
#include "fractionSunyongLee.h"
#include "fractionUtilitySunyongLee.h"

// Function Definitions

int gcdSYL(int num, int denum){
    int tempSYL;
    
    while (denum) {
        tempSYL = num % denum;
        num = denum;
        denum = tempSYL;
    }
    return num;
}


