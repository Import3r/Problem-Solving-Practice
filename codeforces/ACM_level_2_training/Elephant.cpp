#include <iostream>
using namespace std;

int coordinates, step_count = 0;

int main(){

  std::cin >> coordinates;
  int step = 5;

while (coordinates > 0) {
  if (coordinates >= step) {
    step_count += coordinates / step;
    coordinates %= step;
  }
  else{
    step--;
  }
}

std::cout << step_count << '\n';
return 0;
}
