#ifndef _MATRIX
#define _MATRIX

#define t_matrix_elem void*

typedef struct _matrix matrix;


matrix* matrix_new(int rows, int columns);
//Crea la matriz con el tamaño apropiado según las dimensiones establecidas.

void matrix_free(matrix* m);
//Elimina la matriz

int matrix_rows(matrix* m);
//Permite obtener la cantidad de filas

int matrix_columns(matrix* m);
//Permite obtener la cantidad de columnas

t_matrix_elem matrix_get(matrix* m, int row, int col);
//Permite obtener el valor de una posición de la matriz

void matrix_set(matrix* m, int row, int col, t_matrix_elem value);
//Permite reemplazar o asignar un elemento a la matriz

void matrix_print(matrix* m, void prt(t_matrix_elem));
//Permite imprimir una matriz por consola


#endif
