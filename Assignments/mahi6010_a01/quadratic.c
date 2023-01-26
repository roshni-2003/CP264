/*
 ============================================================================
 Name        : mahi6010_a01
 Author      : Roshni Mahindru
 Version     :
 Description : Assignment 1 Q1 Caseflip
 ============================================================================
 */
#include <stdio.h>
#include <math.h>
#define EPSILON 0.000001   

int main() {
    
  float a, b, c, d, x1, x2;
  int inn;
  char temp;
  
  do {
    
    do {
        
      printf("Enter coefficients x,y,z\n");
      inn = scanf("%f,%f,%f", &a,&b,&c);
      
      if (inn != 3 ) {
         printf("input:Invalid input\n");
      } else
        break;
       
      do {
        scanf("%c", &temp);
        if (temp == '\n') break;
      } while (1);

    } while (1);

    if (fabs(a) < EPSILON && fabs(b) < EPSILON && fabs(c) < EPSILON) {
      printf("input:quit\n");
      break;
   
        } else if (fabs(a) < EPSILON ) {
      printf("input:not a quadratic equation\n");
    
        } else { 
    
      d = b * b - 4 * a * c;
      printf("(%f)x^2+(%f)x+%f=0", a, b, c);
   
        if(d == 0){
            printf(" has two equal real roots\n");
            float root = -b/(2*a);
            printf("x:%f\n", root);
        } else if (d > 0 ){
            printf(" has two distinct real roots\n");
            float root1 = (-b+sqrt(d))/(2*a);
            float root2 = (-b-sqrt(d))/(2*a);
            printf("x1:%f\n", root1);
            printf("x2:%f\n", root2);
        } else {
            printf(" has two complex roots\n");
            float real = -b/(2*a);
            float imag = sqrt(-d)/(2*a);
            printf("real:%f\n", real);
            printf("imaginary:%f\n", imag);
        }

      }
  } while (1);
  return 0;
}