#include <iostream>
using namespace std;

long long first_int, second_int;

int main(){
  std::cin >> first_int;
  std::cin >> second_int;
  if(first_int == second_int) std::cout << first_int << '\n';
  else std::cout << 2 << '\n';

  return 0;
}
