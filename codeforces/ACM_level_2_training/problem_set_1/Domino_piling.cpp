#include <iostream>
using namespace std;

int board_width, board_length;

int main(){

  std::cin >> board_length;
  std::cin >> board_width;
  int board_area = board_width * board_length;
  int usable_area = board_area - (board_area % 2);

  std::cout << usable_area / 2 << '\n';

  return 0;
}
