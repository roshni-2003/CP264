/*
------------------------------------------------------------------------------------------
Author:  Roshni Mahindru
ID:      210756010
Email:   mahi6010@mylaurier.ca
Version  2020-01-17
Last Updated: 2023-01-26
-------------------------------------
*/
 
#include<stdio.h>
#include<math.h>

#define EPSILON 1e-6

void derivative(float p[], int n, float d[])
{
    int i;
    for (i=0; i<=n-1; i++){
        d[i]=(n-i-1)*p[i];
    }
}

float horner(float p[], int n, float x)
{
    float result = p[0];

	for (int i = 1; i < n; i++) {
		result = result * x + p[i];
	}
		if (result < 5 * EPSILON && result > 5 * -EPSILON) {
		result = 0.00;
	}
	return result;
}

float newton(float p[], int n, float x0) {
    float x = x0, d[n - 1], px;
	derivative(p, n, d);
	do {
		x0 = x;
		px = horner(p, n, x);
		x -= (px / horner(d, (n - 1), x));
	} while (fabs(px) > EPSILON && fabs(x - x0) > EPSILON);
	return x;
}