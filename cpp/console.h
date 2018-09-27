/* Vararg code by Daniel Cheng (github.com/zetafunction) */

#include <vector>
#include <iostream>
#include <utility>

struct {
  template<typename...Args>
  static void log(Args&&... args) {
    log_impl(std::forward<Args>(args)...);
    std::cout << "\n";
  }

 private:
  template<typename T>
  static void log_impl(std::vector<T> &arr) {
    std::cout << "[";
    bool initial_element = true;
    typename std::vector<T>::iterator ptr;
    for (ptr = arr.begin(); ptr < arr.end(); ptr++) {
      if (!initial_element) {
        std::cout << ", ";
      }
      // TODO: Wrap strings in quotes, etc.?
      log_impl(*ptr);
      initial_element = false;
    }
    std::cout << "]";
  }

  template<typename T>
  static void log_impl(T&& t) {
    std::cout << t;
  }

  template<typename T, typename...Args>
  static void log_impl(T&& t, Args&&... args) {
    std::cout << t << " ";
    log_impl(std::forward<Args>(args)...);
  }
} console;
