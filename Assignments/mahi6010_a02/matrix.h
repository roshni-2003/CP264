/*
------------------------------------------------------------------------------------------
Author:  Roshni Mahindru
ID:      210756010
Email:   mahi6010@mylaurier.ca
Version  2020-01-17
Last Updated: 2023-01-26
-------------------------------------
*/
#ifndef MATRIX_H_
#define MATRIX_H_

float vsum(float *v, int n);
float msum(float *m, int n);
void multiply_vector(float *m, float *v1, float *v2, int n);
void transpose_matrix(float *m1, float *m2, int n);
void multiply_matrix(float *m1, float *m2, float *m3, int n);

#endif