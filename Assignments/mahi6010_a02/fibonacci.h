/*
------------------------------------------------------------------------------------------
Author:  Roshni Mahindru
ID:      210756010
Email:   mahi6010@mylaurier.ca
Version  2020-01-17
Last Updated: 2023-01-26
-------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

extern int *la;

int recursive_fibonacci(int n) {
    if (&n < la) la = &n;
    if (n<=0){
        return 0;
    }
    else if (n<=2){
        return 1;
    }
    else{
        return recursive_fibonacci(n-1) + recursive_fibonacci(n-2);
    }
}

int iterative_fibonacci(int n){
    if (&n < la) la = &n;
    int prev1 = 0;
    int prev2 = 1;
    int curr = 0;
    for(int i = 0; i <= n; i++){
        if(i<=1){
            curr = i;
        } else {
            curr = prev1 + prev2;
            prev1 = prev2;
            prev2 = curr;
        }
    }
    return curr;
}