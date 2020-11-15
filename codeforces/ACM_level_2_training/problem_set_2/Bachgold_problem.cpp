#include <iostream>
using namespace std;

int n, prime_count;

int main(){

  std::cin >> n;
  if (n % 2 == 0) {
    prime_count = n / 2;
    std::cout << prime_count << '\n';
    while (prime_count--) {
       std::cout << 2 << " ";
     }
  }
  else {
    prime_count = n / 2;
    std::cout << prime_count << '\n';
    prime_count--;
    while (prime_count--) {
      std::cout << 2 << " ";
    }
    std::cout << 3 << '\n';
  }

  return 0;
}
