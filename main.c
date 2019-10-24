int main() {

  struct node c = {7, NULL};
  struct node b = {8, &c};
  struct node a = {9, &b};

  print_list(&a);

}
