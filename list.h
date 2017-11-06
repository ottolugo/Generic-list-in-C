#include <stdlib.h>
#include <pthread.h>
 
struct node {
  void *data;
  struct node *next;
};
 
typedef struct node *list;
void ini (list *l);
void insert (list *l, void *d);
void foreach (list l, void (*f) (void *arg));
list next(list l);
void * getData(list l);