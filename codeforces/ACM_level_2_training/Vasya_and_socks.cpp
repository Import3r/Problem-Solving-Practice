#include <iostream>
using namespace std;

int initial_socks, mom_interval, days_survived, initial_bonus, bonus_bonus;

int main(){
std::cin >> initial_socks;
std::cin >> mom_interval;
days_survived = initial_socks;

for (int i = 1; i <= days_survived; i++) {
  if(i%mom_interval == 0) days_survived++;
}

std::cout << days_survived << '\n';
  return 0;
}
