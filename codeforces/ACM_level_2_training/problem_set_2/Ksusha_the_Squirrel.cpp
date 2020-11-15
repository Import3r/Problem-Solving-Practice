#include <iostream>
using namespace std;

int rock_seg, max_rock, jump_power, sectors;
char state;

int main(){
  rock_seg = 0;
  std::cin >> sectors >> jump_power;
  while (sectors--) {
    std::cin >> state;
    if (state == '#') {
      rock_seg++;
    }
    else{
      rock_seg = 0;
    }
    max_rock = max(max_rock, rock_seg);
  }
  if (jump_power > max_rock) {
    std::cout << "YES" << '\n';
  }
  else{
    std::cout << "NO" << '\n';
  }
  return 0;
}
