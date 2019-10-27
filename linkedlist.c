#include <stdio.h>
#include <stdlib.h>
#include "header.h"

void print_list(struct node *mynode){
  printf("[");
  while (mynode != NULL){
    printf("%d", mynode->i);
    mynode = mynode -> next;
  }
  printf("]");
}

struct node * insert_front(struct node *mynode, int value){
  struct node *newnode = (struct node *) malloc(sizeof(struct node));
  newnode->i = value;
  newnode->next = mynode;
  return newnode;
}

struct node * free_list(struct node *mynode){
  while(mynode != NULL){
    struct node* holder = mynode;
    free(holder);
    holder = NULL;
    mynode = mynode->next;
  }
  return mynode;
}

struct node * remove_node(struct node *front, int data){
  struct node *prev = NULL;
  struct node *curr = front;
  while(front != NULL){
    if(front->i == data){
      struct node *holder = curr;
      if(prev == NULL){
        front = front->next;} //when front is the first node, front should point to the next node to remove the first one
      else{
        prev->next = holder->next;} // the pointer of prev should skip to the following node of deleted one
      free(front);
      front = NULL;
      }
    }
  return front;
}
