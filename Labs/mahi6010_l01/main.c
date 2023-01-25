/*
 ============================================================================
 Name        : mahi6010_l01
 Author      : Roshni Mahindru
 Version     :17-Jan-2023
 Description : Assignment 1 Q1 Caseflip
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
    setbuf(stdout, NULL); // turns standard output buffering off
    int number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    printf("The number you entered is %d\n", number);
    return (0);
}