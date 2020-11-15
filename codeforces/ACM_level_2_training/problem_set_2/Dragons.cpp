#include <iostream>
using namespace std;
#include <utility>
#include <vector>
#include <algorithm>

int n;
long long kirito_strength;
std::vector< pair <long long, long long> > v;
pair < long long, long long > p;

int main(){
  std::cin >> kirito_strength >> n;
  while (n--) {
    long long dragon_strength, bonus;
    std::cin >> dragon_strength >> bonus;
    p = make_pair(dragon_strength, bonus);
    v.push_back(p);
  }

  sort(v.begin(), v.end());

  for (int i = 0; i < v.size(); i++) {
    if(kirito_strength <= v[i].first) {
      std::cout << "NO" << '\n';
      return 0;
    }
    else {
      kirito_strength += v[i].second;
    }
  }
  std::cout << "YES" << '\n';
  return 0;
}
