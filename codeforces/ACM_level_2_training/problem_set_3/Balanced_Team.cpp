#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

long long n, skill, max_count, difference, l, r;
std::vector<long long> v;

int main(){
  std::cin >> n;
  while (n--) {
    std::cin >> skill;
    v.push_back(skill);
  }

  sort(v.begin(), v.end());

  difference = 0, max_count = 0;
  while (l < v.size()) {
    while (r < v.size() && difference <=5) {
      max_count = max(max_count, r-l+1);
      difference = v[r] - v[l];
      r++;

    }
    l++;
  }

  std::cout << max_count << '\n';
  return 0;
}
