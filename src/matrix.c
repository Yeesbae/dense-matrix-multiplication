#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

double* create_matrix(int n) {
    if (n <= 0) {
        return NULL;
    }

    void* memptr = NULL;
    size_t length = (size_t)n;
    int result = 0;
    size_t alignment = 64;
    
    size_t size = length * length;
    result = posix_memalign(&memptr, alignment, size * sizeof(double));

    if (!result) {
        return (double*)memptr;
    }
    return NULL;
}

void free_matrix(double* matrix) {
    free(matrix);
}

void zero_matrix(int n, double* matrix) {
    if (n <= 0 || matrix == NULL) {
        return;
    }

    size_t length = (size_t)n;

    for (size_t i = 0; i < length * length; i++) {
        matrix[i] = 0.0;
    }

    return;
}

void identity_matrix(int n, double* matrix) {
    return;
}

void random_matrix(int n, double* matrix) {
    return;
}