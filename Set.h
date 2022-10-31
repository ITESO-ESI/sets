#ifndef SET_H
#define SET_H

typedef struct set Set;
#include <stdlib.h>

// Inicializa un nuevo SET
Set* set_new(int (*equals)(void* a, void* b));

// Regresa un apuntador al set si se agregó el elemento
// NULL si no fue posible agregarlo
Set* set_add(Set *s, void *element);

// Regresa un apuntador al set si se eliminó el elemento
// NULL si no fue posible eliminarlo
Set* set_remove(Set *s, void *element);

int set_contains(Set *s, void *element);

#endif //SET_H
