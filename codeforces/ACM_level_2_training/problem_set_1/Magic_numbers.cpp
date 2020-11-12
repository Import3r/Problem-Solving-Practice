#include <iostream>
using namespace std;
#include <string>

int num;
string magic_numbers[] = {"1", "14", "144"};

bool is_magic(int num){
  string number = to_string(num);
  int pos, hop, next = 0, current = 0;
  bool missing = true;
  int array_size = sizeof(magic_numbers) / sizeof(magic_numbers[0]);
  int len = number.length();
  while(current < len){
    for (int mag = array_size-1; mag >= 0; mag--) {
      pos = number.substr(current).find(magic_numbers[mag]);
      if (pos == 0){
        hop = magic_numbers[mag].length();
        current += hop;
        missing = false;
        break;
        }
    }
      if (missing) return false;
      missing = true;
  }
return true;
}


int main(){
  std::cin >> num;
  if (is_magic(num)) std::cout << "YES" << '\n';
  else std::cout << "NO" << '\n';
  return 0;
}
