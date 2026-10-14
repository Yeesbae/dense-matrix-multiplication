#ifndef MATRIX_H
#define MATRIX_H

// matrices are stored as one contiguous block of n × n doubles.
// They are stored row by row, the formula: element (i, j) is at position i × n + j counting from 0.

// returns null if n is 0 or negative, or if memory allocation fails.
// create_matrix: memory unfilled, 64-byte aligned, release it with free_matrix
double* create_matrix(int n);

// free_matrix: frees the memory allocated by create_matrix, does nothing if the pointer is null
void free_matrix(double* matrix);

// fills the matrix with zeros
// zero_matrix: does nothing if n is 0 or negative, or if the pointer is null
void zero_matrix(int n, double* matrix); 

// fills the matrix with the identity matrix
void identity_matrix(int n, double* matrix);

// fills the matrix with random numbers in [-1, 1]
void random_matrix(int n, double* matrix); 

#endif // MATRIX_H