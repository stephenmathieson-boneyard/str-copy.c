
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "src/str-copy.h"

int main(int argc, char **argv) {
  char foo[] = "foo";
  char *copy = str_copy(foo);
  assert(0 == strcmp("foo", copy));

  foo[1] = 'b';
  assert(0 == strcmp("foo", copy));

  return 0;
}
