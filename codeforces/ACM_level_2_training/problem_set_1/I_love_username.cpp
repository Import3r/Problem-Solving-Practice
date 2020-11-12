#include <iostream>
using namespace std;

int contests, score, max_score, min_score, amazing_scores = 0;
bool amazing = false;

int main(){

std::cin >> contests;
std::cin >> score;
max_score = min_score = score;

for (int i = 0; i < contests-1; i++) {
  std::cin >> score;

  if (score<min_score){
    min_score = score;
    amazing = true;
  }

  if (score>max_score) {
    max_score = score;
    amazing = true;
  }

  if (amazing){
    amazing_scores++;
    amazing = false;
}

}
std::cout << amazing_scores << '\n';
  return 0;
}
