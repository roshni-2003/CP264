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

int main(int argc, char *argv[]) {
    setbuf(stdout, NULL); // turns standard output buffering off

    char input;
    printf("Please enter a character\n");
    do
        input = getchar();
    while (isspace(input));

    while(input != '*'){
        bool valid = false;
        char output;
        if(input >= 'a' && input <= 'z' || input >= 'A' && input <= 'Z'){
            if(input >= 'a' && input <= 'z'){
                output = input-32;
            } else if(input >= 'A' && input <= 'Z'){
                output = input+32;
            }
            valid = true;
            printf("%c: %c", input, output);
        }
        else{
            printf("%c: invalid", input);
        }
        printf("\n");

        printf("Please enter a character\n");
        do
            input = getchar();
        while (isspace(input));
    }
    printf("%c:quit\n", input);
}