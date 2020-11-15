#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

long long n, number;
std::vector<long long> v;

int main(){
  std::cin >> n;
  n = 2*n;
  while (n--) {
    std::cin >> number;
    v.push_back(number);
  }
  sort(v.begin(), v.end());
  if (v.front() == v.back()) {
    std::cout << -1 << '\n';
  }
  else {
    for (int i = 0; i < v.size(); i++) {
      std::cout << v[i] << " ";
    }
    std::cout << '\n';
  }

  return 0;
}
