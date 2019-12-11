#include <dlfcn.h>

#include <iostream>

#include "test.h"

int main(int argc, char* argv[]) {
  if (argc < 2) {
    std::terminate();
  }
  void* sdl_library = dlopen(argv[1], RTLD_NOW);
  if (sdl_library == NULL) {
    std::clog << "error!" << std::endl;
  } else {
    std::clog << "loaded!" << std::endl;
    f_t f = reinterpret_cast<f_t>(dlsym(sdl_library, "f"));
    C c{123};
    (*f)(&c);
  }
  dlclose(sdl_library);
}
