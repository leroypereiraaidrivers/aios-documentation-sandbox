#include <iostream>

class OntologyLib {
public:
  OntologyLib();

  ~OntologyLib() = default;

  template <typename T> T add2nums(const T &num1, const T &num2) {
    return num1 + num2;
  }
};