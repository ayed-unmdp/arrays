#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#include "tda/matrix.h"
#include "tda/vector.h"


void print_int(void* value) {
    printf("%5d ", *(int*)value);
}


//replace a row of matrix with a vector
void replace_row(matrix* m, int row, vector* v) {
    /*** COMPLETAR ***/
}

//replace a column of matrix with a vector
void replace_column(matrix* m, int col, vector* v) {
    /*** COMPLETAR ***/
}

//multiplicar dos matrices
void multiply_matrix(matrix* m1, matrix* m2, matrix* m3) {
    /*** COMPLETAR ***/
}


void test_matrix_int() {
    int* aux;
    matrix* m = matrix_new(10, 10);
    
    printf("\n\nInicio pruebas de matriz de enteros\n");
    
    srand(time(NULL));
    for (int i = 0; i < matrix_rows(m); i++) {
        for (int j = 0; j < matrix_columns(m); j++) {
            aux = malloc(sizeof(int));
            *aux = rand() % 1000;
            matrix_set(m, i, j, aux);
        }
    }

    printf("\nMatriz original\n");
    matrix_print(m,print_int);

    vector* v = vector_new(10); 
    while(!vector_isfull(v)){
        aux = malloc(sizeof(int));
        *aux = rand() % 3 +1;
        vector_add(v, aux);
    }

    printf("\nVector original\n");
    vector_print(v, print_int);

    printf("\nReemplazo de fila\n");
    replace_row(m, 2, v);
    matrix_print(m, print_int);

    printf("\nReemplazo de columna\n");
    replace_column(m, 2, v);
    matrix_print(m, print_int);

}   


// rellenar la matriz con numeros aleatorios
void fill_matrix(matrix* m, int max) {
    static int i = 0;
    i++;
    srand(time(NULL)+i);
    for (int i = 0; i < matrix_rows(m); i++) {
        for (int j = 0; j < matrix_columns(m); j++) {
            float* auxi = malloc(sizeof(float));
            *auxi = rand() % max;
            //aux = (float)rand()/(float)(RAND_MAX/100);
            matrix_set(m, i, j, auxi);
        }
    }
}

void prt_float(void* value) {
    printf("%5.2f ", *(float*)value);
}

void test_matrix_float() {
    
    matrix* a = matrix_new(3, 2);
    matrix* b = matrix_new(2, 4);
    matrix* c = matrix_new(3, 4);

    printf("\n\nInicio pruebas de matriz de flotantes\n");
    fill_matrix (a, 10);
    fill_matrix (b, 10);
    
    printf("\nMatriz A\n");
    matrix_print(a,prt_float);
    printf("\nMatriz B\n");
    matrix_print(b,prt_float);

    multiply_matrix(a, b, c);
    printf("\nMatriz C\n");
    matrix_print(c,prt_float);

}


void main() {
    test_matrix_int();
    //test_matrix_float();
}