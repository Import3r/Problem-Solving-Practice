#include <iostream>
using namespace std;
#include <string>

string string_a, string_b, string_c;
int n;
bool possible = true;

int main(){

std::cin >> n;
  for (int i = 0; i < n; i++) {
    std::cin >> string_a;
    std::cin >> string_b;
    std::cin >> string_c;
    int input_length = string_a.length();

    for (int index = 0; index < input_length; index++) {
      if (string_c[index] == string_a[index] || string_c[index] == string_b[index]) continue;
      else {
        possible = false;
        break;
      }
    }

    if (possible) std::cout << "YES"<< '\n';
    else std::cout << "NO"<< '\n';
    possible = true;
  }

  return 0;
}
