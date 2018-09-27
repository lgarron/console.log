/* Vararg code by Daniel Cheng (github.com/zetafunction) */

#include <vector>
#include <iostream>
#include <map>
#include <utility>

struct {
  template<typename...Args>
  static void log(Args&&... args) {
    log_impl_top_level(std::forward<Args>(args)...);
    std::cout << "\n";
  }

 private:
  template<typename T, typename...Args>
  static void log_impl_top_level(T&& t, Args&&... args) {
    log_impl_top_level(t);
    std::cout << " ";
    log_impl_top_level(std::forward<Args>(args)...);
  }

  template<typename T>
  static void log_impl_top_level(T&& t) {
    std::cout << t;
  }

  template<typename T>
  static void log_impl_syntax(T&& t) {
    std::cout << t;
  }

  static void log_impl_syntax(std::string& t) {
    std::cout << "\"" << t << "\"";
  }

  template<typename T>
  static void log_impl_top_level(std::vector<T> &arr) {
    std::cout << "[";
    bool initial_element = true;
    typename std::vector<T>::iterator it;
    for (it = arr.begin(); it < arr.end(); it++) {
      if (!initial_element) {
        std::cout << ", ";
      }
      // TODO: Wrap strings in quotes, etc.?
      log_impl_syntax(*it);
      initial_element = false;
    }
    std::cout << "]";
  }

  template<typename K, typename V>
  static void log_impl_top_level(std::map<K, V> &arr) {
    std::cout << "{";
    bool initial_element = true;
    typename std::map<K, V>::iterator it;
    for (it = arr.begin(); it != arr.end(); it++) {
      if (!initial_element) {
        std::cout << ", ";
      }
      // TODO: Wrap strings in quotes, etc.?
      auto key = it->first;
      log_impl_syntax(key);
      std::cout << ": ";
      auto value = it->second;
      log_impl_syntax(value);
      initial_element = false;
    }
    std::cout << "}";
  }
} console;
