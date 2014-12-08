/*
 * matrixLib.h
 *
 *  Author: Tomas Baca
 */ 


#ifndef MATRIXLIB_H_
#define MATRIXLIB_H_

#include <stdint.h>
#include <string.h>

typedef struct {
	
	int16_t width;
	int16_t height;
	float * data;
} matrix_float;

typedef struct {
	
	int16_t length;
	int8_t orientation;
	float * data;
} vector_float;

// matrix allocation
matrix_float * matrix_float_alloc(const int16_t h, const int16_t w);

// vector allocation
vector_float * vector_float_alloc(const int16_t length, int8_t orientation);

// matrix deallocation
void matrix_float_free(matrix_float * m);

// vector deallocation
void vector_float_free(vector_float * v);

// add two vector a, b and write the answer to a
void vector_float_add(vector_float * a, const vector_float * b);

// copy vector b to a vector a
void vector_float_copy(vector_float * a, const vector_float * b);

// set the particular cell of the vector
void vector_float_set(vector_float * v, const int16_t pos, const float value);

// set the whole vector to zeros
void vector_float_set_zero(vector_float * v);

// set the particular cell of the vector
float vector_float_get(const vector_float * v, const int16_t pos);

// set particular cell of the matrix
void matrix_float_set(matrix_float * m, const int16_t h, const int16_t w, const float value);

// get the particular cell of the matrix
float matrix_float_get(const matrix_float * m, const int16_t h, const int16_t w);

// matrix transposition
void matrix_float_transpose(matrix_float * m);

// set all cells to value
void matrix_float_set_all(matrix_float * m, const float value);

// set matrix to zeros
void matrix_float_set_zero(matrix_float * m);

// set matrix to identity matrix
void matrix_float_set_identity(matrix_float * m);

// copy matrix b to matrix a
void matrix_float_copy(matrix_float * a, const matrix_float * b);

// add two matrices
void matrix_float_add(matrix_float * a, const matrix_float *b);

// subtract two matrices
void matrix_float_sub(matrix_float * a, const matrix_float *b);

// get row from matrix
void matrix_float_get_row(const matrix_float * m, vector_float * v, const int16_t row);

// get column from matrix
void matrix_float_get_col(const matrix_float * m, vector_float * v, const int16_t col);

// multiply two matrices
void matrix_float_mul(const matrix_float * a, const matrix_float * b, matrix_float * C);

// multiply a matrix by a vector from the right
void matrix_float_mul_vec_right(const matrix_float * m, const vector_float * v, vector_float * C);

// multiply a matrix by a vector from the left
void matrix_float_mul_vec_left(const matrix_float * m, const vector_float * v, vector_float * C);

// compute the determinant of a matrix
float matrix_float_determinant(const matrix_float * a);

// compute the inversion of matrix A, returns 0 if the inversion doesn't exist, 1 otherwise
int matrix_float_inverse(const matrix_float * a, matrix_float * C);

#endif /* MATRIXLIB_H_ */