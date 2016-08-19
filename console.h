/* Vararg code by Daniel Cheng (github.com/zetafunction) */

#include <iostream>
#include <utility>

struct {
  template<typename T>
  static void log(T&& t) {
    std::cout << t << "\n";
  }

  template<typename T, typename...Args>
  static void log(T&& t, Args&&... args) {
    std::cout << t << " ";
    log(std::forward<Args>(args)...);
  }
} console;
