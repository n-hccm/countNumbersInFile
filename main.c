//
// Created by nghoc on 15/06/2024.
//

#include "count.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Usage: %s <file>\n", argv[0]);
        exit(1);
    }

    // Allocate memory for the file name.
    char *fileName = malloc(strlen(argv[1]) + 1);
    if (fileName == NULL) {
        printf("Memory allocation failed\n");
        exit(1);
    }

    // Copy the file name to the allocated memory.
    strcpy(fileName, argv[1]);

    // Call the function countNumbersInFile with the file name as the argument.
    int count = countNumbersInFile(fileName);
    printf("Number of numbers in file %s: %d\n", argv[1], count);

    // Free the memory allocated for the file name.
    free(argv[1]);

    return 0;
}