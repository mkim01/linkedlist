#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "header.h"

int main(){
  struct node* start = (struct node *)malloc(sizeof(struct node));
  start = NULL;

  printf("Empty list: ");
  print_list(start);
  printf("\n");

  printf("Add numbers 1 to 5 \n");
  int i;
  for(i = 1; i <= 5; i++){
      start = insert_front(start, i);
      printf("Add %d :", i);
      print_list(start);
      printf("\n" );
  }

  printf("\n" );
  printf("printing the list:");
  print_list(start);
  printf("\n");

  printf("Remove 4:\n");
  start = remove_node(start, 4);
  print_list(start);
  printf("\n");

  printf("Removing 2:\n");
  start = remove_node(start, 2);
  print_list(start);
  printf("\n");

  printf("Removing -1:\n");
  start = remove_node(start, -1);
  print_list(start);
  printf("\n");

  printf("Removing 1:\n");
  start = remove_node(start, 1);
  print_list(start);
  printf("\n");

  printf("Removing 5:\n");
  start = remove_node(start, 5);
  print_list(start);
  printf("\n");

  printf("Freeing list.\n");
  start = free_list(start);

  printf("Printing list:\n");
  print_list(start);

  return 0;
}
