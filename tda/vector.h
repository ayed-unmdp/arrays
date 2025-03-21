#ifndef _VECTOR
#define _VECTOR

#define t_vector_elem void*
typedef struct _vector vector;

vector* vector_new();
// Crea el vector vacío reservando el espacio en memoria. Sin Tamaño maximo.

vector* vector_new_of(int ini_size);
// Crea el vector vacío reservando el espacio en memoria. Tamaño Máximo = ini_size.

void vector_free(vector* v);
// Eliminar el vector

int vector_size(vector* v);
// Permite obtener el tamaño actual del vector

int vector_isfull(vector* v);
// Devuelve 0 si no está lleno y 1 si está lleno.

int vector_isempty(vector* v);
// Devuelve 0 si no está vacío y 1 si está vacío.

t_vector_elem vector_get(vector* v, int index);
// Permite obtener el valor de una posición del vector

t_vector_elem vector_set(vector* v, int index, t_vector_elem value);
// Permite reemplazar el valor de una posición del vector

int vector_add(vector* v, t_vector_elem value);
// Permite agregar un elemento al final

int vector_insert(vector* v, int index, t_vector_elem value);
// Permite agregar un elemento en una posición determinada.

t_vector_elem vector_remove(vector* v, int index);
// Permite eliminar un elemento del vector

void vector_print(vector* v, void (*print)(t_vector_elem));
// Permite imprimir un vector por consola

#endif
