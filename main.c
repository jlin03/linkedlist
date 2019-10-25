#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "list.h"

int main() {

  struct node *a = malloc(sizeof(struct node));
  a->i = 0;
  struct node *start = a;
  print_list(start);
  for(int i = 1; i < 10; i++) {
    start = insert_front(start,i);
    print_list(start);
  }
  start = remove_list(start,9);
  start = remove_list(start,7);
  start = remove_list(start,2);
  print_list(start);

  free_list(start);

}
