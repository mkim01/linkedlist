struct node { int i; struct node *next;};
void print_list(struct node * mynode);
struct node * insert_front(struct node * mynode, int value);
struct node * free_list(struct node * mynode);
struct node * remove_node(struct node *front, int data);
