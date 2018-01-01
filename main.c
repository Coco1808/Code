//
// Created by Jet Shang on 2017/12/31.
//

#include <stdio.h>

#include "12.31/odd.h"
#include "function/function.h"

int main(){


    int num = 5;
    isPrime(num);
    if(idOdd(num)){
        printf("The number is odd. \n");
    } else {
        printf("The number is even. \n");
    }

    return 0;
}