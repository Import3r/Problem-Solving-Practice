#include <iostream>
using namespace std;
#include <utility>
#include <vector>
#include <algorithm>

int n, tests;
std::vector<pair <long long, long long>> v;
long long min_time, petya_time, rest_time, elapsed_time;

int main() {
  std::cin >> tests;
  while (tests--) {

    v.clear();
    min_time = petya_time = rest_time = 0;

    std::cin >> n;
    while (n--) {
      std::cin >> rest_time;
      v.push_back(make_pair(rest_time, 0));
    }

    for (int i = 0; i < v.size(); i++) {
      std::cin >> petya_time;
      v[i].second = petya_time;
    }

    sort(v.begin(), v.end(), greater<pair <long long, long long>>());

    elapsed_time = 0;
    for (int i = 0; i < v.size(); i++) {
      if (v[i].second < v[i].first - elapsed_time) {
        elapsed_time += v[i].second;
        v[i].first = 0;
      }
    }

    min_time = 0;
    for (int i = 0; i < v.size(); i++) {
      min_time = max(min_time, v[i].first);
    }
    min_time = max(min_time, elapsed_time);
    /*
    for (int i = 0; i < v.size(); i++) {
      std::cout << v[i].first << ' ' << v[i].second << '\n';
    }
    */
    std::cout << min_time << '\n';
  }
  return 0;
}
