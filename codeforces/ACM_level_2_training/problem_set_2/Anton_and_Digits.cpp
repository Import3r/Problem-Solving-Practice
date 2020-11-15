#include <iostream>
using namespace std;

int main(){
  long long k2, k3, k5, k6;
  std::cin >> k2 >> k3 >> k5 >> k6;
  long long c256 = k2;
  if (c256 > k5) {
    c256 = k5;
  }
  if (c256 > k6) {
    c256 = k6;
  }
  k2 -= c256;

  long long c32 = min(k2, k3);
  long long max_32 = c32 * 32;
  long long max_256 = c256 * 256;

  std::cout << max_32 + max_256 << '\n';

  return 0;
}
