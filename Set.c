//
// Created by Josean Camarena on 31/10/22.
//

#include "Set.h"
#define INITIAL_SIZE 10

struct set
{
  void **elements;
  int current_count;
  int size;
  int (*equal)(void *a, void *b);
};

Set* set_new(int (*equals)(void* a, void* b))
{
  Set *new_set = malloc(sizeof(Set));
  new_set->current_count = 0;
  new_set->size = INITIAL_SIZE;
  //new_set->elements = malloc(sizeof(void*) * INITIAL_SIZE);
  new_set->elements = calloc(INITIAL_SIZE, sizeof(void*));

  new_set->equal = equals;
  return new_set;
}

int set_contains(Set *s, void *element)
{
  for(int i = 0; i < s->size; i++)
  {
    if(s->elements[i] == NULL)
      continue;
    if(s->equal(s->elements[i], element))
      return 1;
  }
  return 0;
}
