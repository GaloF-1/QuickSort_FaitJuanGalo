#include <stdio.h>
#include "EstDatos_Algoritmos.h"

int main() {

    counter = 0;

    //int LTest[8] = {2, 6, 5, 3, 8, 7, 1, 0};
    int LTest[8] = {5, 3, 2, 4, 1, 7, 6, -1};
    printf("Original: ");
    printArray(LTest);
    //QuickArr(LTest, 0, 8);
    quickSort(LTest, 0, 7);

    return 0;
}
