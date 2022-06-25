#include <stdio.h>
#include <stdlib.h>
#define BACKWARD_HAS_DW 1
#include "backward.hpp"
namespace backward {
backward::SignalHandling sh;
}

int main() {
  char *c = "hello world";
  c[1] = 'H';
}