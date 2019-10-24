#include<stdio.h>
#include <string.h>

struct node {int i; struct node *next;};

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
  printf("[ %s]",s);
}




struct node * insert_front(struct node *n, int i);
struct node * free_list(struct node *n);


int main() {

  struct node c = {7};
  struct node b = {8, &c};
  struct node a = {9, &b};

  print_list(&a);

}
