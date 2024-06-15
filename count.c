#include "count.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int countNumbersInFile(char *fileName) {
/* Count the amount of numbers in a file. It should count all int values in the file.
 * @param fileName: the name of the file to count the numbers in.
 * @return: the amount of numbers in the file.
 */
    // The file is opened in read mode. This prevents modification of the file.
    FILE *file = fopen(fileName, "r");
    if (file == NULL) {
        printf("Cannot open file %s\n", fileName);
        exit(1);
    }

    // The count variable is used to store the amount of numbers in the file. The number variable is used to store the current number being read.
    // This should output the amount of numbers in the file.
    int count = 0;
    int number;
    while (fscanf(file, "%d", &number) == 1) {
        count++;
    }

    // The file is closed to prevent memory leaks.
    fclose(file);
    // The count variable is returned.
    return count;
}