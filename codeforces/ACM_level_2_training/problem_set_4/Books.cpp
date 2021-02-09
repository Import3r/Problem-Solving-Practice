#include <iostream>
using namespace std;
#include <vector>

long long n, t, a, counter, window_sum, removed, max_books = 0;
long long l,r;
std::vector<long long> v1, v2;

int main(){

  std::cin >> n >> t;
  counter = n;

  //read input into vector
  while (counter--) {
    std::cin >> a;
    v1.push_back(a);
  }

  //create cummulative sum array
  v2.push_back(v1[0]);
  for (int i = 1; i < v1.size(); i++) {
    v2.push_back(v1[i]+v2[i-1]);
  }

  l = 0, r = 0;
  window_sum = v2[0];
  while (l < v2.size()) {
    while (r < v2.size() && window_sum<=t) {
        max_books = max(max_books, r-l+1);
        r++;
        removed = v2[l] - v1[l];
        window_sum = v2[r] - removed;
    }
    l++;
    removed = v2[l] - v1[l];
    window_sum = v2[r] - removed;
  }

  std::cout << max_books << '\n';

  return 0;
}
