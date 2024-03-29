#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"


void print_list(struct node *n) {
  char s[300] = "";
  char s2[2] = "";
  struct node *x = n;
  sprintf(s2,"%d",x->i);
  strcat(s, s2);
  strcat(s, " ");
  while(x->next) {
    x = x->next;
    sprintf(s2,"%d",x->i);
    strcat(s, s2);
    strcat(s, " ");
  }
  printf("[ %s]\n",s);
}




struct node * insert_front(struct node *n, int i) {
  printf("Inserting: %d\n", i);
  struct node *x = malloc(sizeof(struct node));
  x->i = i;
  x->next = n;
  return x;
}


struct node * free_list(struct node *n) {
    struct node *prev = n;
    struct node *x = n;
    printf("Freeing: %d %p\n", x->i, x);
    prev = x;
    free(prev);
    while(x->next) {
        x = x->next;
        prev = x;
        printf("Freeing: %d %p\n", x->i, x);
        free(prev);
    }

}

struct node * remove_list(struct node *front, int data) {
  printf("Removing: %d\n", data);
  struct node *x = front;
  if(front->i == data) {
    struct node *newStart = front->next;
    free(front);
    return newStart;
  }
  else {
    while(x->next) {
      struct node *current = x;
      x = x->next;
      if(x->i == data) {
        current->next = x->next;
        free(x);
      }
    }
    return front;
  }
}
