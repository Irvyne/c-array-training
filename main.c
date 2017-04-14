#include <stdio.h>
#include "array.h"

int main(int argc, char *argv[]) {
    int numbers[5] = {9, 78, 3, 25, 58};
    int numbersCopy[5] = {0};

    arrayDisplay(numbers, 5);
    printf("\n");

    printf("%d is the sum of the array\n", arraySum(numbers, 5));
    printf("%f is the AVG of the array\n", arrayAverage(numbers, 5));

    printf("arrayCopy(): ");
    arrayCopy(numbers, numbersCopy, 5);
    arrayDisplay(numbersCopy, 5);

    printf("arrayMaximum(55): ");
    arrayMaximum(numbersCopy, 5, 55);
    arrayDisplay(numbersCopy, 5);

    printf("arraySort(): ");
    arraySort(numbers, 5);
    arrayDisplay(numbers, 5);
}
