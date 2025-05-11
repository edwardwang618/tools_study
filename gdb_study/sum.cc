#include <iostream>

int sum(int a, int b) {
  return a + b;
}

int main() {
  int a = 5;
  int b = 10;
  int s = sum(a, b);
  std::cout << "The sum of " << a << " and " << b << " is " << s << std::endl;
  return 0;
}