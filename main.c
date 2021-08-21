#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "EstDatos_Algoritmos.h"
#define LENGTH 8

int main() {

    counter = 0;
    srand(time(0));
    //int LTest[8] = {2, 6, 5, 3, 8, 7, 1, 0};
    //int LTest[8] = {5, 3, 2, 4, 1, 7, 6, -1};
    //int LTest[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    //int LTest[8] = {25, 23, 18, 12, 16, 23, 2, 23};

    int LTest[LENGTH] = {0};
    for (int i = 0; i < LENGTH; i++)
        LTest[i] = rand()%26;


    printf("Original: ");
    printArray(LTest);
    //QuickArr(LTest, 0, LENGTH - 1);
    quickSort(LTest, 0, LENGTH - 1);
    printArray(LTest);

    return 0;
}
