#include <iostream>

#include "test.h"

extern "C" {
int f(void* p) {
  C* pc = reinterpret_cast<C*>(p);
  pc->echo();
  return 0;
}
}

static_assert(typecheck<f_t, f>);
