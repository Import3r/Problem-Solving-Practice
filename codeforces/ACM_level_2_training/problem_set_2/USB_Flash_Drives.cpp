#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

int n, file_size, capacity, needed_count = 0;
std::vector<int> capacities;


int main(){
  std::cin >> n;
  std::cin >> file_size;
  while (n--) {
    std::cin >> capacity;
    capacities.push_back(capacity);
  }

  sort(capacities.begin(), capacities.end(), greater <int>());

  for (int i = 0; i < capacities.size(); i++) {
    if (file_size > 0){
      file_size -= capacities[i];
      needed_count++;
    }
    else break;
  }
  std::cout << needed_count << '\n';
  return 0;
}
