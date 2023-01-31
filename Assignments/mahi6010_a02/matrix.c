/*
 -------------------------------------
 File:    matrix.h
 Project: Matrix
 file description
 -------------------------------------
 Author:  Roshni Mahindru
 ID:      210756010
 Email:   mahi6010@mylaurier.ca
 Version  2023-01-27
 -------------------------------------
 */

#include<stdio.h>
#include<stdlib.h>
#include "matrix.h"

float vsum(float *v, int n) {
	float result = 0.0;
	int i;
	for (i = 0; i < n; i++) {
		result += *(v + i);
	}
	return result;
}

float msum(float *m, int n) {
	float result = 0.0;
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			result += *(m+i * n+j);
		}
	}
	return result;
}

void multiply_vector(float *m, float *vin, float *vout, int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		*(vout + i) = 0;
	}
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			*(vout + j) += (*(vin + i) * *(m+j*n+i));
		}
	}
}

void transpose_matrix(float *m1, float *m2, int n) {
	int i, j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			*(m2+j * n+i) = *(m1+i * n+j);
		}
	}
}

void multiply_matrix(float *m1, float *m2, float *m3, int n) {
	int i, j, k;
	float sum;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			sum = 0;
			for (k = 0; k < n; k++) {
				sum += *(m1+i*n+k) * *(m2+k * n+j);
			}
			*(m3 + i *n + j) = sum;
		}
	}
}