#include "DataStructures/Common/Node.h"

#include <stdio.h>


int main() {
  char a = 'a';
  printf("%ld\n", sizeof(a));
  struct Node node = node_constructor((void*)&a, 1);

}