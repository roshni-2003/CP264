/*
--------------------------------------------------
Project: cp264-a2q2
File:    polynomial_main.c
Author:  HBF
Version: 2023-01-03
Compile: gcc polynomial.h polynomial_main.c
--------------------------------------------------
*/
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include "polynomial.h"

void display_polynomial(float p[], int n, float x)
{
  int i;
  for (i=0; i<n; i++) {
    if (p[i] > EPSILON && i !=0) 
	  printf("+");  
	printf("%.2f*%.2f^%d", p[i], x, n-i-1);
  }
}
 
int main(int argc, char *argv[])
{  
  int n = 4;
  float p[] = {1, 2, 3, 4};
  
  int m = 3;
  float x[] = {0,1,10};
  
  // test display and horner functions
  int i;
  for (i=0; i<m; i++) {
    printf("p(%.2f)=", x[i]);
    display_polynomial(p, n, x[i]);
    printf("=");  
    printf("%.2f\n", horner(p, n, x[i]));
  }
  
  // test derivative function
  float d[n-1]; 
  derivative(p, n, d);
  for (i=0; i<m; i++) {
    printf("d(%.2f)=", x[i]);
    display_polynomial(d, n-1, x[i]);
    printf("=");  
    printf("%.2f\n", horner(d, n-1, x[i]));
  }
  
  // test newton function
  float x0=-2;
  float root = newton(p, n, x0);
  printf("root=%.2f\n", root);
  printf("p(%.2f)=%.2f\n", root, horner(p, n, root)); 


  return 0;
}
