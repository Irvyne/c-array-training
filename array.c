#include <stdio.h>
#include "array.h"

void arrayDisplay(int array[], int arrayLength) {
    printf("Array => ");

    for (int i = 0; i < arrayLength; i++) {
        printf("%d", array[i]);

        if (i == arrayLength - 1)
            printf("\n");
        else
            printf(", ");
    }
}

int arraySum(int array[], int arrayLength) {
    int sum = 0;

    for (int i = 0; i < arrayLength; i++) {
        sum += array[i];
    }

    return sum;
}

double arrayAverage(int array[], int arrayLength) {
    return (double) arraySum(array, arrayLength) / (double) arrayLength;
}

void arrayCopy(int arrayOriginal[], int arrayCopy[], int arrayLength) {
    for (int i = 0; i < arrayLength; i++) {
        arrayCopy[i] = arrayOriginal[i];
    }
}

void arrayMaximum(int array[], int arrayLength, int maxValue) {
    for (int i = 0; i < arrayLength; i++) {
        if (array[i] > maxValue)
            array[i] = 0;
    }
}

void arraySort(int array[], int arrayLength) {
    for (int currentValue, i = arrayLength - 1; i >= 0; i--) {
        currentValue = array[arrayLength - 1];

        for (int j = 0; j < arrayLength; j++) {
            if (currentValue <= array[j]) {
                for (int k = arrayLength - 1; k > j; k--) {
                    array[k] = array[k - 1];
                }

                array[j] = currentValue;

                break;
            }
        }
    }
}
