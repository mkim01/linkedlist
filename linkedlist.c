#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void print_list(struct node *mynode){
  while (mynode != NULL){
    printf("%d", mynode->i);
    mynode = mynode -> next;
  }
}

struct node * insert_front(struct node *mynode, int value){
  struct node *newnode = (struct node *) malloc(sizeof(struct node));
  newnode->i = value;
  newnode->next = mynode;
  return newnode;
}

struct node * free_list(struct node *mynode){
  return mynode;
}

struct node * remove_node(struct node *front, int data){
  return front;
}
