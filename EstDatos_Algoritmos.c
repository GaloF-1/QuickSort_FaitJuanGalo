//
// Created by juang on 20/08/2021.
//

#include "EstDatos_Algoritmos.h"
#include <stdio.h>


void QuickArr(int *List, int prins, int final) {
    int itemIzquierda = prins;
    int itemDerecha = final;
    int pivote = prins;

    if (prins < final) {
        while (itemIzquierda != itemDerecha) {
            if (List[itemIzquierda] < List[pivote]) {
                itemIzquierda++;
            } else if (List[itemDerecha] > List[pivote]) {
                itemDerecha--;
            } else {
                swap(List, itemIzquierda, itemDerecha);

                if (List[itemDerecha] == List[pivote]) {
                    itemIzquierda++;
                } else if (List[itemIzquierda] == List[pivote]) {
                    itemDerecha--;
                } else {
                    itemIzquierda++;
                    itemDerecha--;
                }
            }
        }

        swap(List, itemIzquierda, pivote);

        QuickArr(List, itemIzquierda + 1, final);
        QuickArr(List, prins, itemIzquierda - 1);
    }
}



void printArray(int * List) {

    printf("%d: ", counter++);
    for (int i = 0; i < 8; i++) {
        printf("%d, ", List[i]);
    }
    printf("\n");
}

void quickSort(int* array, int start, int end) {
    int leftItem = start + 1;
    int rightItem = end;
    int pivot = start;

    if (start < end)
    {   while (leftItem < rightItem)
        {
            while (array[leftItem] < array[pivot] || array[rightItem] > array[pivot]) {
                if (array[leftItem] < array[pivot])
                    leftItem++;
                if (array[rightItem] > array[pivot])
                    rightItem--;
            }
            if (leftItem < rightItem && array[leftItem] > array[rightItem]) { //swap
                printf("part [%d, %d], pivot=%d, swap L R: ", start, end, array[pivot]);
                swap(array, leftItem, rightItem);
            }
        }
        //Swap pivot rightItem
        if (array[pivot] > array[rightItem]){
            printf("part [%d, %d], pivot=%d, swap P R: ", start, end, array[pivot]);
            swap(array, pivot, rightItem);
        }

        //Sort partitions
        quickSort(array, start, rightItem - 1);
        quickSort(array, leftItem, end);
    }
}

void swap(int* array, int a, int b) {
    int aux = array[a];
    array[a] = array[b];
    array[b] = aux;
    printArray(array);
}
