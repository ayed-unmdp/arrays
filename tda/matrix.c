#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"


/// @brief estructura de matriz
typedef struct _matrix{
    t_matrix_elem* a;
    int rows;
    int columns;
 } matrix;


/**
 * @brief Crea la matriz con el tamaño apropiado según las dimensiones establecidas.
 * 
 * @param row filas 
 * @param col columnaumns 
 * @return matrix* 
 */
matrix* matrix_new(int rows, int columns){
    /*** COMPLETAR ***/
}

/**
 * @brief Elimina la matriz
 * 
 * @param m puntero a la matriz 
 */
void matrix_free(matrix* m){
    /*** COMPLETAR ***/
}

/**
 * @brief Permite obtener la cantidad de filas
 * 
 * @param m puntero a la matriz 
 * @return int la cantidad de filas
 */
int matrix_rows(matrix* m){
    /*** COMPLETAR ***/
}

/**
 * @brief Permite obtener la cantidad de columnas
 * 
 * @param m puntero a la matriz 
 * @return int la cantidad de columnas
 */
int matrix_columns(matrix* m){
    /*** COMPLETAR ***/
}

/**
 * @brief Permite obtener el valor de una posición de la matriz
 * 
 * @param m puntero a la matriz 
 * @param row fila 
 * @param col columna 
 * @return t_matrix_elem 
 */
t_matrix_elem matrix_get(matrix* m, int row, int col){
    /*** COMPLETAR ***/
}

/**
 * @brief Permite reemplazar o asignar un elemento a la matriz
 * 
 * @param m puntero a la matriz 
 * @param row fila
 * @param col columna
 * @param value valor a asignar
 */
void matrix_set(matrix* m, int row, int col, t_matrix_elem value){
    /*** COMPLETAR ***/
}

/**
 * @brief Permite imprimir una matriz por consola
 * 
 * @param m puntero a la matriz 
 * @param prt función que permite imprimir un valor de la matriz
 */
void matrix_print(matrix* m, void prt(t_matrix_elem)){
    /*** COMPLETAR ***/
}