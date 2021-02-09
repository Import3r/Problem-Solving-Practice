#include <iostream>
using namespace std;
#include <algorithm>
#include <vector>

std::vector<int> v;
int player1_score = 0, player2_score = 0;

void count_scores(vector<int>& v) {
  int i = 0, j = v.size() - 1;
  while (i < j) {
    if (v[i] > v[j]) {
      player1_score += v[i];
      i++;
    }
    else{
      player1_score += v[j];
      j--;
    }

    if (v[i] > v[j]) {
      player2_score += v[i];
      i++;
    }
    else{
      player2_score += v[j];
      j--;
    }
  }
  if (i == j){
    player1_score += v[i];
  }
}

int main(){
  int n, number;
  std::cin >> n;
  while (n--) {
    std::cin >> number;
    v.push_back(number);
  }

  count_scores(v);

  std::cout << player1_score << " " << player2_score << '\n';
  return 0;
}
