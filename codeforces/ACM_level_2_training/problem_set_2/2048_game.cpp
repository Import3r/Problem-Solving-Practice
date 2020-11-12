#include <iostream>
using namespace std;
#include <vector>
#include<algorithm>

vector < long long > number_list;
long long number;
int n, set_count;
bool posssible = false;

int main(){

  std::cin >> n;

  while(n--){
    std::cin >> set_count;
    for (int i = 0; i < set_count; i++) {
    std::cin >> number;
    number_list.push_back(number);
    }

    sort(number_list.begin(), number_list.end(),greater <long long>());

    if(number_list.back() > 2048) {std::cout << "NO" << '\n'; continue;}
    std::cout << number_list.back() << '\n';
    for (int i = 0; i < number_list.size(); i++) {
      if (number_list[i] > 2048) continue;
      if (number_list[i] == 2048 || number_list[i] + number_list[i+1] == 2048) {
        posssible = true;
        break;
      }
    }
    if(posssible) std::cout << "YES" << '\n';
    else std::cout << "NO" << '\n';
    posssible = false;
  }
  return 0;
}
