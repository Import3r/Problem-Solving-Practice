#include <iostream>
using namespace std;

int n, price, height, last_hight = 0, dollars = 0, energy = 0;

int main(){
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cin >> height;
    price = last_hight - height;
    energy += price;
    if(energy < 0){
      dollars += -1 * energy;
      energy = 0;
    }

    last_hight = height;
  }

std::cout << dollars << '\n';
  return 0;
}
// 2 7 3 0 8 1
