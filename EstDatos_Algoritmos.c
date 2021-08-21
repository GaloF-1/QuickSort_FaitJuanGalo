//
// Created by juang on 20/08/2021.
//

#include "EstDatos_Algoritmos.h"
#include <stdio.h>


void QuickArr(int *List, int prins, int final) {
    int i = prins;
    int d = final;
    int p = prins;
    int aux;

    if (prins < final) {
        while (i != d) {
            if (List[i] < List[p]) {
                i++;
            } else if (List[d] > List[p]) {
                d--;
            } else if (List[i] >= List[p] && List[d] <= List[p]) {
                aux = List[i];
                List[i] = List[d];
                List[d] = aux;


                if (List[d] == List[p]) {
                    i++;
                } else if (List[i] == List[p]) {
                    d--;
                } else {
                    i++;
                    d--;
                }
            }
        }

        aux = List[i];
        List[i] = List[p];
        List[p] = aux;

        QuickArr(List, i + 1, final);
        QuickArr(List, prins, i - 1);
    }
}



void PrntArr(int * List) {

    for (int i = 0; i < 8; i++) {
        printf("%d, ", List[i]);
    }
    printf("\n");
}
