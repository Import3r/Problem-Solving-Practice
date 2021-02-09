#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

int pairs = 0;

void find_pairs(vector<int>& boys, vector<int>& girls) {
  int i = 0, j = 0;

  while (i < boys.size() && j < girls.size()) {
    if (boys[i] - girls[j] > 1) {
      i++;
    }
    else if (girls[j] - boys[i] > 1) {
      j++;
    }
    else {
      pairs++;
      i++; j++;
    }
  }
  return;
}


int main(){
  int skill, n, m;
  std::vector<int> boys;
  std::vector<int> girls;

  std::cin >> n;
  while (n--) {
    std::cin >> skill;
    boys.push_back(skill);
  }
  std::cin >> m;
  while (m--) {
    std::cin >> skill;
    girls.push_back(skill);
  }

  sort(boys.begin(), boys.end(), greater<int>());

  sort(girls.begin(), girls.end(), greater<int>());

  find_pairs(boys, girls);

  std::cout << pairs << '\n';

  return 0;
}
