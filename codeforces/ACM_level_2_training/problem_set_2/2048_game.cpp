#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int q,n;
std::vector<long long> v;

int main(){
  std::cin >> q;
  while (q--) {
    std::cin >> n;
    std::vector<long long> v;

    while (n--) {
      long long number;
      std::cin >> number;
      v.push_back(number);
    }

    bool found = false;
    sort(v.begin(), v.end(), greater<long long>());
    /*for (int i = 0; i < v.size(); i++) {
      std::cout << v[i] << ' ';
      }*/
      //std::cout << '\n';
    for (int i = 0; i < v.size(); i++) {
      if (v[i] == 2048) {
        std::cout << "YES" << '\n';
        found = true;
        break;
      }
    }
    if(found) continue;

    while (v.size() > 1) {
      /*for (int i = 0; i < v.size(); i++) {
        std::cout << v[i] << ' ';
      }*/
      //std::cout << '\n';
      int i = v.size() - 1;
      int j = i;
      int tail_count = 0;
      while (v[i] == v[j] && j >= 0) {
        tail_count++;
        j--;
      }
      j++;

      //std::cout << tail_count << '\n';

      if (tail_count == 1){
        v.pop_back();
        continue;
      }

      if(tail_count % 2 != 0){
        v.pop_back();
        i--;
        tail_count--;
      }

      i -= tail_count / 2;

      while (j <= i) {
        v[i] *= 2;
        v.pop_back();
        i--;
      }
      if(v.back() == 2048) {
        found = true;
        break;
      }
    }
    if(found){
      std::cout << "YES" << '\n';
      continue;
    }
    else std::cout << "NO" << '\n';
  }
  return 0;
}
