/*
--------------------------------------------------
Project: cp264-a2q3
File:    matrix_main.c  public test driver
Author:  HBF
Version: 2023-01-04
Compile: gcc matrix.h matrix.c matrix_main.c
--------------------------------------------------
*/

#include <stdio.h>
#include "matrix.h"

void display_vector(float *v, int n);
void display_matrix(float *m, int n);

int main()
{
  int n = 3, i;
  float m1[n][n];
  float m2[n][n];
  float m3[n][n];

  // testing data
  float v[9] = {
      1, 2, -1,
      -2, 0, 1,
      1, -1, 0};

  // assign value to m1
  float *p = &v[0];
  float *p1 = &m1[0][0];
  for (i = 0; i < n * n; i++)
    *p1++ = *p++;

  printf("\nm1:\n");
  display_matrix(&m1[0][0], n);
  printf("msum(m1):%.2f\n", msum(&m1[0][0], n));

  printf("\nm2=m1':\n");
  transpose_matrix(&m1[0][0], &m2[0][0], n);
  display_matrix(&m2[0][0], n);
  printf("msum(m2):%.2f\n", msum(&m2[0][0], n));

  multiply_matrix(&m1[0][0], &m2[0][0], &m3[0][0], n);
  printf("\nm3=m1*m2':\n");
  display_matrix(&m3[0][0], n);
  printf("msum(m3):%.2f\n", msum(&m3[0][0], n));

  float v1[] = {1, 1, 1};
  printf("\nv1:\n");
  display_vector(v1, n);
  printf("vsum(v1):%.2f\n", vsum(v1, n));

  float v2[n];
  multiply_vector(&m1[0][0], v1, v2, n);
  printf("\nv2=m1*v1':\n");
  display_vector(v2, n);
  printf("vsum(v2):%.2f", vsum(v2, n));

  return 0;
}

void display_vector(float *v, int n)
{
  float *p = v;
  int i, j;
  for (i = 0; i < n; i++)
  {
    printf("%-6.2f", *p++);
  }
  printf("\n");
}

void display_matrix(float *m, int n)
{
  float *p = m;
  int i, j;
  for (i = 0; i < n; i++)
  {
    for (j = 0; j < n; j++)
        printf("%-6.2f", *(m+i*n+j)); // or printf("%-6.2f", *p++);
    printf("\n");
  }
}
   