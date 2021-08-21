#include "EstDatos_Algoritmos.h"

int main() {

    counter = 1;

    int LTest[8] = {2, 6, 5, 3, 8, 7, 1, 0};
    printArray(LTest);
    //QuickArr(LTest, 0, 8);
    quickSort(LTest, 0, 8);
    printArray(LTest);



    return 0;
}
