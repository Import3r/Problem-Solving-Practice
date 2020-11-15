#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int first_num, second_num, n, number;
std::vector<int> v;

int main(){
  std::cin >> n;
  while (n--) {
    std::cin >> number;
    v.push_back(number);
  }

  sort(v.begin(), v.end(), greater<int>());
  first_num = v.front();


  for (int i = 0; i < v.size(); i++) {
    if(first_num % v[i] != 0 || v[i] == v[i+1]) {
      second_num = v[i];
      break;
  }
  }
  std::cout << first_num << " " << second_num << '\n';
  return 0;
}
