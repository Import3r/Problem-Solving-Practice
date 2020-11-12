#include <iostream>
using namespace std;

int beef_count, chicken_count, beef_price, chicken_price, buns_num, bun_pairs, n, profit;

int main(){

cin >> n;

  for (int i = 0; i < n; i++) {
    std::cin >> buns_num;
    std::cin >> beef_count;
    std::cin >> chicken_count;
    std::cin >> beef_price;
    std::cin >> chicken_price;


    bun_pairs = buns_num / 2;

    if (beef_price > chicken_price) {
      beef_count = min(bun_pairs, beef_count);
      chicken_count = min(bun_pairs - beef_count, chicken_count);
    }
    else {
      chicken_count = min(bun_pairs, chicken_count);
      beef_count = min(bun_pairs - chicken_count, beef_count);
    }

    profit = beef_count*beef_price + chicken_count*chicken_price;
    std::cout << profit << '\n';
  }
  return 0;
}
