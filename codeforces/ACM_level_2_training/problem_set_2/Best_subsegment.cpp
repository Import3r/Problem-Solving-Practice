#include <iostream>
using namespace std;
#include <vector>

long long n, number, max_val;
std::vector<long long> v;
int current_count = 0;
int max_count = 0;

int main(){
  std::cin >> n;
  while (n--) {
    std::cin >> number;
    v.push_back(number);
  }
  max_val = v.front();
  for (int i = 0; i < v.size(); i++) {
    if (v[i] > max_val) {
      max_val = v[i];
    }
  }

  for (int i = 0; i < v.size(); i++) {
    if (v[i] == max_val) {
      current_count++;
      max_count = max(max_count, current_count);
    }
    else {
      current_count = 0;
    }
  }
  std::cout << max_count << '\n';

  return 0;
}
