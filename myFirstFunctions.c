//
// Created by terje on 24.09.2021.
//

#include "myFirstFunctions.h"
#include <stdio.h>
#include <string.h>

char check_name() {
    //Made 2 strings that can contain >51 char.
    char first_in[50], second_in[50];

    //Place to hold the comparison value
    int result_compare;

    //Ask the user for his/her name and saves it in first_in
    printf("What's your name?\n");
    scanf("%s",first_in);

    //temp. prints out the result
    printf("You entered: %s\n", first_in);

    //ask the user for the name again, and stores the string in second_in
    printf("Please type your name again.\n");
    scanf("%s", second_in);

    //Now we check first_in with second_in
    //And if the results match, then we go out of the loop
    result_compare = strcmp(first_in,second_in);
    while (strcmp(first_in, second_in) != 0) {
        printf("The names didn't match.\nPlease enter it again.\n");
        scanf("%s", second_in);
    }

    //
}


