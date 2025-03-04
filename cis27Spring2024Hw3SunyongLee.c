/**
 * Program Name: cis27Spring2024Hw3SunyongLee.c
 * Discussion:   Implentation File
 *                 Menu Execution
 * Written By:   Sunyong Lee
 * Date:         2024/05/26
 */

// Header/include File
#include <stdio.h>
#include <stdlib.h>
#include "cis27Spring2024Hw3UtilitySunyongLee.h"

// Application Driver
int main(void) {
    runMenuHw3SYL();
    return 0;
}

/** PROGRAM OUTPUT
 We write code to manipulate data (which are
 provided by the user) to produce the required
 outcome in the most efficient way!

 CIS 27 - Data Structures and Algorithms
 Laney College
 Sunyong Lee

 Information --
   Assignment:              HW #3 Exercise #1
   Implemented by:          Sunyong Lee
   Required Sumission Data: 2024/05/26
   Actual Submission Data:  2024/05/26

 ****************************************
 *             MENU - HW #3             *
 * (1) Creating/Updating 2 Polynomials  *
 * (2) Evaluating 2 Polynomials         *
 * (3) Adding 2 Polynomials             *
 * (4) Multiplying 2 Polynomials        *
 * (5) Displaying 2 Polynomials         *
 * (6) Displaying Resulting Polynomials *
 * (7) Quit                             *
 ****************************************
 Enter an integer for option + ENTER: 9

 Wrong Option!

 ****************************************
 *             MENU - HW #3             *
 * (1) Creating/Updating 2 Polynomials  *
 * (2) Evaluating 2 Polynomials         *
 * (3) Adding 2 Polynomials             *
 * (4) Multiplying 2 Polynomials        *
 * (5) Displaying 2 Polynomials         *
 * (6) Displaying Resulting Polynomials *
 * (7) Quit                             *
 ****************************************
 Enter an integer for option + ENTER: 6

   Not appropriate as there are no Polynomials!

 ****************************************
 *             MENU - HW #3             *
 * (1) Creating/Updating 2 Polynomials  *
 * (2) Evaluating 2 Polynomials         *
 * (3) Adding 2 Polynomials             *
 * (4) Multiplying 2 Polynomials        *
 * (5) Displaying 2 Polynomials         *
 * (6) Displaying Resulting Polynomials *
 * (7) Quit                             *
 ****************************************
 Enter an integer for option + ENTER: 1

  Initializing 2 Polynomials -

    Calling init() -

    ********************************
    *       init() Submenu         *
    * (1) Creating 2 Polynomials   *
    * (2) Updating Polynomial 1    *
    * (3) Updating Polynomial 2    *
    * (4) Displaying 2 Polynomials *
    * (5) Return                   *
    *******************************
    Enter an integer for option + ENTER: 4

    Wrong Option!

    ********************************
    *       init() Submenu         *
    * (1) Creating 2 Polynomials   *
    * (2) Updating Polynomial 1    *
    * (3) Updating Polynomial 2    *
    * (4) Displaying 2 Polynomials *
    * (5) Return                   *
    *******************************
    Enter an integer for option + ENTER: 2

    Not appropriate as ther are no Polynomials!

    ********************************
    *       init() Submenu         *
    * (1) Creating 2 Polynomials   *
    * (2) Updating Polynomial 1    *
    * (3) Updating Polynomial 2    *
    * (4) Displaying 2 Polynomials *
    * (5) Return                   *
    *******************************
    Enter an integer for option + ENTER: 1

    Creating 2 Polynomials  -

      Calling create() -

        ********************************
        *       create() Submenu       *
        * (1) Creating 2 Polynomials   *
        * (2) Displaying 2 Polynomials *
        * (3) Return                   *
        *******************************
        Enter an integer for option + ENTER: 1

        Removing existing 2 Poly if existing

         Creating 2 new poly

           Creating Poly #1 -
           Is there a term (1 : yes, 0 : no)? 1
               Enter expo: 3
               Creating coeff Fraction:
                 Enter an int for num: 1
                 Enter a non-zero for denom: 4

           Is there a term (1 : yes, 0 : no)? 1
               Enter expo: 0
               Creating coeff Fraction:
                 Enter an int for num: 1
                 Enter a non-zero for denom: -2

           Is there a term (1 : yes, 0 : no)? 0

           Creating Poly #2 -
           Is there a term (1 : yes, 0 : no)? 1
               Enter expo: 4
               Creating coeff Fraction:
                 Enter an int for num: 1
                 Enter a non-zero for denom: 2

           Is there a term (1 : yes, 0 : no)? 1
               Enter expo: 2
               Creating coeff Fraction:
                 Enter an int for num: 1
                 Enter a non-zero for denom: -3

           Is there a term (1 : yes, 0 : no)? 1
               Enter expo: 0
               Creating coeff Fraction:
                 Enter an int for num: 1
                 Enter a non-zero for denom: 2

           Is there a term (1 : yes, 0 : no)? 0


        ********************************
        *       create() Submenu       *
        * (1) Creating 2 Polynomials   *
        * (2) Displaying 2 Polynomials *
        * (3) Return                   *
        *******************************
        Enter an integer for option + ENTER: 2

        Displaying 2 Polynomials -
        Poly #1 -
          Address: 0x60000291c010
          Degree: 3
          Number of Terms: 2

          Term #1 -
            Address: 0x60000291c020
            Expo: 3
            Coefficient -
              Address: 0x60000291c024
              num: 1
              denom: 4

          Term #2 -
            Address: 0x600002914020
            Expo: 0
            Coefficient -
              Address: 0x600002914024
              num: -1
              denom: 2

        Poly #2 -
          Address: 0x600002914040
          Degree: 4
          Number of Terms: 3

          Term #1 -
            Address: 0x600002914050
            Expo: 4
            Coefficient -
              Address: 0x600002914054
              num: 1
              denom: 2

          Term #2 -
            Address: 0x600002918040
            Expo: 2
            Coefficient -
              Address: 0x600002918044
              num: -1
              denom: 3

          Term #3 -
            Address: 0x600002918070
            Expo: 0
            Coefficient -
              Address: 0x600002918074
              num: 1
              denom: 2

        ********************************
        *       create() Submenu       *
        * (1) Creating 2 Polynomials   *
        * (2) Displaying 2 Polynomials *
        * (3) Return                   *
        *******************************
        Enter an integer for option + ENTER: 3

    Return to previous menu!

    ********************************
    *       init() Submenu         *
    * (1) Creating 2 Polynomials   *
    * (2) Updating Polynomial 1    *
    * (3) Updating Polynomial 2    *
    * (4) Displaying 2 Polynomials *
    * (5) Return                   *
    *******************************
    Enter an integer for option + ENTER: 5

    Return to previous menu!
 ****************************************
 *             MENU - HW #3             *
 * (1) Creating/Updating 2 Polynomials  *
 * (2) Evaluating 2 Polynomials         *
 * (3) Adding 2 Polynomials             *
 * (4) Multiplying 2 Polynomials        *
 * (5) Displaying 2 Polynomials         *
 * (6) Displaying Resulting Polynomials *
 * (7) Quit                             *
 ****************************************
 Enter an integer for option + ENTER: 2

  Evaluating Polynomials -

     Enter the value (Fraction) to be evaluated with -
       num: 1
       denom: 1

     Poly #1 at x (1/1): (-1/4)
     Poly #2 at x (1/1): (2/3)
 ****************************************
 *             MENU - HW #3             *
 * (1) Creating/Updating 2 Polynomials  *
 * (2) Evaluating 2 Polynomials         *
 * (3) Adding 2 Polynomials             *
 * (4) Multiplying 2 Polynomials        *
 * (5) Displaying 2 Polynomials         *
 * (6) Displaying Resulting Polynomials *
 * (7) Quit                             *
 ****************************************
 Enter an integer for option + ENTER: 3

  Adding 2 Polynomials -
     Address: 0x600002918090
     Degree: 4
     Number of Terms: 3

     Term #1 -
       Address: 0x6000029180a0
       Expo: 4
       Coefficient -
         Address: 0x6000029180a4
         num: 1
          denom: 2

     Term #2 -
       Address: 0x6000029180c0
       Expo: 3
       Coefficient -
         Address: 0x6000029180c4
         num: 1
          denom: 4

     Term #3 -
       Address: 0x6000029180e0
       Expo: 2
       Coefficient -
         Address: 0x6000029180e4
         num: -1
          denom: 3
 ****************************************
 *             MENU - HW #3             *
 * (1) Creating/Updating 2 Polynomials  *
 * (2) Evaluating 2 Polynomials         *
 * (3) Adding 2 Polynomials             *
 * (4) Multiplying 2 Polynomials        *
 * (5) Displaying 2 Polynomials         *
 * (6) Displaying Resulting Polynomials *
 * (7) Quit                             *
 ****************************************
 Enter an integer for option + ENTER: 1

  Initializing 2 Polynomials -

    Calling init() -

    ********************************
    *       init() Submenu         *
    * (1) Creating 2 Polynomials   *
    * (2) Updating Polynomial 1    *
    * (3) Updating Polynomial 2    *
    * (4) Displaying 2 Polynomials *
    * (5) Return                   *
    *******************************
    Enter an integer for option + ENTER: 2

    Updating Polynomial #1

       *************************************
       *         update() Submenu          *
       * (1) Adding one term               *
       * (2) Removing one term             *
       * (3) Displaying updated Polynomial *
       * (4) return                        *
       *************************************
       Enter an integer for option + ENTER: 1

         Adding 1 term -
               Enter expo: 2
               Creating coeff Fraction:
                 Enter an int for num: 1
                 Enter a non-zero for denom: 1

       *************************************
       *         update() Submenu          *
       * (1) Adding one term               *
       * (2) Removing one term             *
       * (3) Displaying updated Polynomial *
       * (4) return                        *
       *************************************
       Enter an integer for option + ENTER: 3

          Address: 0x60000291c010
          Degree: 3
          Number of Terms: 3

          Term #1 -
              Address: 0x60000291c020
              Expo: 3
              Coefficient -
                  Address: 0x60000291c024
                  num: 1
                  denom: 4

          Term #2 -
              Address: 0x600002910010
              Expo: 2
              Coefficient -
                  Address: 0x600002910014
                  num: 1
                  denom: 1

          Term #3 -
              Address: 0x600002914020
              Expo: 0
              Coefficient -
                  Address: 0x600002914024
                  num: -1
                  denom: 2
       *************************************
       *         update() Submenu          *
       * (1) Adding one term               *
       * (2) Removing one term             *
       * (3) Displaying updated Polynomial *
       * (4) return                        *
       *************************************
       Enter an integer for option + ENTER: 4

       Return to previous menu!

    ********************************
    *       init() Submenu         *
    * (1) Creating 2 Polynomials   *
    * (2) Updating Polynomial 1    *
    * (3) Updating Polynomial 2    *
    * (4) Displaying 2 Polynomials *
    * (5) Return                   *
    *******************************
    Enter an integer for option + ENTER: 5

    Return to previous menu!
 ****************************************
 *             MENU - HW #3             *
 * (1) Creating/Updating 2 Polynomials  *
 * (2) Evaluating 2 Polynomials         *
 * (3) Adding 2 Polynomials             *
 * (4) Multiplying 2 Polynomials        *
 * (5) Displaying 2 Polynomials         *
 * (6) Displaying Resulting Polynomials *
 * (7) Quit                             *
 ****************************************
 Enter an integer for option + ENTER: 4
 multiplying 2 Polynomials -
     Address: 0x600002910020
     Degree: 7
     Number of Terms: 7

     Term #1 -
       Address: 0x600002910030
       Expo: 7
       Coefficient -
         Address: 0x600002910034
         num: 1
          denom: 8

     Term #2 -
       Address: 0x600002910090
       Expo: 6
       Coefficient -
         Address: 0x600002910094
         num: 1
          denom: 2

     Term #3 -
       Address: 0x600002910050
       Expo: 5
       Coefficient -
         Address: 0x600002910054
         num: -1
          denom: 12

     Term #4 -
       Address: 0x6000029100b0
       Expo: 4
       Coefficient -
         Address: 0x6000029100b4
         num: -7
          denom: 12

     Term #5 -
       Address: 0x600002910070
       Expo: 3
       Coefficient -
         Address: 0x600002910074
         num: 1
          denom: 8

     Term #6 -
       Address: 0x6000029100d0
       Expo: 2
       Coefficient -
         Address: 0x6000029100d4
         num: 2
          denom: 3

     Term #7 -
       Address: 0x6000029100f0
       Expo: 0
       Coefficient -
         Address: 0x6000029100f4
         num: -1
          denom: 4
 ****************************************
 *             MENU - HW #3             *
 * (1) Creating/Updating 2 Polynomials  *
 * (2) Evaluating 2 Polynomials         *
 * (3) Adding 2 Polynomials             *
 * (4) Multiplying 2 Polynomials        *
 * (5) Displaying 2 Polynomials         *
 * (6) Displaying Resulting Polynomials *
 * (7) Quit                             *
 ****************************************
 Enter an integer for option + ENTER: 6

     Address: 0x600002910020
     Degree: 7
     Number of Terms: 7
 ****************************************
 *             MENU - HW #3             *
 * (1) Creating/Updating 2 Polynomials  *
 * (2) Evaluating 2 Polynomials         *
 * (3) Adding 2 Polynomials             *
 * (4) Multiplying 2 Polynomials        *
 * (5) Displaying 2 Polynomials         *
 * (6) Displaying Resulting Polynomials *
 * (7) Quit                             *
 ****************************************
 Enter an integer for option + ENTER: 7

   All objects have been removed/deleted through calls to free()!

 Have fun!Program ended with exit code: 0
*/

/** Logic_Code_Output Issues
 Hello,
 I tried to follow all the steps as outlined in the PDF named `cis27Spring2024Hw3Update2`. However, I found some mistakes in this file. For example, in the main menu, option 6 represents two different things. Thus, I set up my code to print the result of multiplying the result at this option. Additionally, I did not receive information for the update() submenu regarding how to remove one term. Therefore, I set up my code so that the user can remove one term by its order. I want to let you know that I tried to follow all the steps as best as I could.
*/



