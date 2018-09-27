#include "../console.h"

#include <vector>
#include <string>
#include <map>

int main()
{
  std::map<std::string, int> m;
  m["cat"] = 31;
  m["dog"] = 34;
  console.log("C++:", 1337, *new std::vector<int>{21, -22}, m);
}
