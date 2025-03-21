#include <stdio.h>
#include <stdlib.h>
#include "vector.h"


typedef struct _vector {
   t_vector_elem* a;
   /*** COMPLETAR ***/
} vector;


/// @brief Crea el vector vacío reservando el espacio en memoria. sin Tamaño Máximo.
/// @return vector* 
vector* vector_new(){
   /*** COMPLETAR ***/
}

/// @brief Crea el vector vacío reservando el espacio en memoria. Indicando Tamaño Máximo = ini_size.
/// 
/// @param ini_size 
/// @return vector* 
vector* vector_new_of(int ini_size){
   /*** COMPLETAR ***/
}

/// @brief Eliminar el vector
/// 
/// @param v puntero al vector a liberar de la memoria
void vector_free(vector* v){
   /*** COMPLETAR ***/ 
} 

/// @brief Permite obtener el tamaño actual del vector
/// 
/// @param v vector a consultar
/// @return int 
int vector_size(vector* v){
   /*** COMPLETAR ***/
   return 0;
}

/// @brief Devuelve 0 si no está lleno y 1 si está lleno. 
/// 
/// @param v vector a consultar
/// @return int 
int vector_isfull(vector* v) {
   /*** COMPLETAR ***/
}

/// @brief Devuelve 0 si no está vacío y 1 si está vacío. 
/// 
/// @param v vector a consultar
/// @return int 1 si está vacío o cero en otro caso.
int vector_isempty(vector* v){
   /*** COMPLETAR ***/
   return 1;
}

/// @brief Permite obtener el valor de una posición del vector
/// 
/// @param v vector a consultar
/// @param index posición a consultar
/// @return t_vector_elem 
t_vector_elem vector_get(vector* v, int index){
   /*** COMPLETAR ***/
}  

/// @brief Permite reemplazar el valor de una posición del vector
/// 
/// @param v vector a configurar
/// @param index posición donde reemplaza el valor
/// @param value valor a reemplazar
/// @return t_vector_elem devuelve el valor reemplazado
t_vector_elem vector_set(vector* v, int index, t_vector_elem value){
   /*** COMPLETAR ***/
}

/// @brief Permite agregar un elemento al final
/// 
/// @param v vector al que se le agrega el elemento
/// @param value elemento a agregar
/// @return int 1 si pudo agregar 0 en otro caso
int vector_add(vector* v, t_vector_elem value){
   /*** COMPLETAR ***/
}

/// @brief Permite agregar un elemento en una posición determinada.
/// 
/// @param v vector al que se le agrega el elemento
/// @param index posición donde inserta el elemento
/// @param value valor a insertar
/// @return 1 si pudo insertar 0 en otro caso
int vector_insert(vector* v, int index, t_vector_elem value){
   /*** COMPLETAR ***/
}

/// @brief Permite eliminar un elemento del vector
/// 
/// @param v vecotr a eliminar el elemento
/// @param index posición del elemento a eliminar
/// @return t_vector_elem elemento eliminado
t_vector_elem vector_remove(vector* v, int index){
   /*** COMPLETAR ***/ 
   return NULL;
}

/// @brief impromir el vector por consola
/// 
void vector_print(vector* v, void (*print)(t_vector_elem)){
   /*** COMPLETAR ***/
}
