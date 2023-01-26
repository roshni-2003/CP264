/*
 ============================================================================
 Name        : mahi6010_a01
 Author      : Roshni Mahindru
 Version     :
 Description : Assignment 1 Q1 Caseflip
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <ctype.h>

int factorial( int n) {
if (n <= 1)
return 1;
else
return n*factorial(n-1);
}

int main(int argc, char *argv[]){
    setbuf(stdout, NULL); // turns standard output buffering off
    int input;
    while (input != '*'){
        printf("Enter an integer: ");
        scanf("%d", &input);
        if (input>=0){
            int fact = factorial(input);
            printf("%d!: %d", input, fact);
            printf("\n");
        }
        else{
            printf("%d: invalid", input);
            printf("\n");
        }
    }
}