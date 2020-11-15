#include <iostream>
using namespace std;
#include <vector>

vector < long long > biggest_cans{0, 0};
long long volume, capacity, total_volume = 0;
int counter, n;
bool possible;

int main(){
  std::cin >> n;
  counter = n;
  while (counter--) {
    std::cin >> volume;
    total_volume += volume;
  }
  counter = n;
  while (counter--) {
    std::cin >> capacity;
    if (capacity > biggest_cans.front()) {
      biggest_cans.insert(biggest_cans.begin(), capacity);
      biggest_cans.pop_back();
    }
    else if(capacity > biggest_cans.back()) {
      biggest_cans.pop_back();
      biggest_cans.push_back(capacity);
    }
    }

  possible = biggest_cans.front() + biggest_cans.back() >= total_volume;

  if(possible) std::cout << "YES" << '\n';
  else std::cout << "NO" << '\n';
  return 0;
}
