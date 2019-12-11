
#ifndef TEST_H_20191206
#define TEST_H_20191206

#include <string>
#include <vector>

using f_t = int (*)(void*);
template <typename T, auto v>
constexpr bool typecheck = std::is_same_v<T, std::decay_t<decltype(v)>>;

struct C {
public:
  int a;
  void echo() { std::cout << "hello, world! " << a << std::endl; }
};

#endif  // TEST_H_20191206
