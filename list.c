#include "list.h"
#include <string.h>
#include <stdio.h>
 
void ini (list *l) {
  *l = NULL;
}
 
void insert (list *l, void *d) {
  if (*l == NULL) {
    *l = malloc(sizeof(struct node));
    (*l)->next=NULL;
    (*l)->data=d;
    return;
  }
  struct node *aux=*l;
  while (aux->next!=NULL) 
    aux=aux->next;
  aux->next=malloc(sizeof(struct node));
  aux->next->next=NULL;
  aux->next->data=d;
}
 
void foreach (list l, void (*f) (void *arg)) {
  struct node *aux = l;
  if (aux == NULL) 
    printf("Error: _list is empty\n");
  while (aux != NULL) {
    f(aux->data);
    aux = aux->next;
  }
}
 
list next(list l){
  return l->next;
}
 
void * getData(list l){
  return l->data;
}