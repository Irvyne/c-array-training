#ifndef IRVYNE_ARRAY_H
#define IRVYNE_ARRAY_H

/**
 * Display an array, its elements separated by commas.
 *
 * @param array
 * @param arrayLength
 */
void arrayDisplay(int array[], int arrayLength);

/**
 * Create a function which return the SUM of given int[].
 *
 * @param array
 * @param arrayLength
 * @return
 */
int arraySum(int array[], int arrayLength);

/**
 * Calculate the AVG of given int[].
 *
 * @param array
 * @param arrayLength
 * @return
 */
double arrayAverage(int array[], int arrayLength);

/**
 * Copy the content of the first array in the second one.
 *
 * @param arrayOriginal
 * @param arrayCopy
 * @param arrayLength
 */
void arrayCopy(int arrayOriginal[], int arrayCopy[], int arrayLength);

/**
 * Reset to 0 all values in int[] which are greater than the maxValue.
 *
 * @param array
 * @param arrayLength
 * @param maxValue
 */
void arrayMaximum(int array[], int arrayLength, int maxValue);

/**
 * Sort an array an ascending way.
 *
 * @param array
 * @param arrayLength
 */
void arraySort(int array[], int arrayLength);

#endif /* IRVYNE_ARRAY_H */