#include "LinkedList.h"

#include <stdlib.h>
#include <stdio.h>

struct Node* create_node_ll(void* data, unsigned long size);
void destroy_node_ll(struct Node* node);

struct Node* interate_ll(struct LinkedList* linked_list, int index);
void insert_ll(struct LinkedList* linked_list, int index, void* data, unsigned long size);
void remove_ll(struct LinkedList* linked_list, int index);
void* retrieve_ll(struct LinkedList* linked_list, int index);
void bubble_sort_ll(struct LinkedList* linked_list, int (*compare)(void* a, void* b));
void binary_search_ll(struct LinkedList* linked_list, void* query, int (*compare)(void* a, void* b));

struct LinkedList linked_list_constructor(void) {
  struct LinkedList linked_list;

  linked_list.head = NULL;
  linked_list.length = 0;

  linked_list.insert = insert_ll;
  linked_list.remove = remove_ll;
  linked_list.retrieve = retrieve_ll;
  linked_list.sort = bubble_sort_ll;
  linked_list.search = binary_search_ll;

  return linked_list;
}

void linked_list_destructor(struct LinkedList* linked_list) {
  for (int i = 0; i < linked_list->length; i++) {
    linked_list->remove(linked_list, 0);
  }
}


