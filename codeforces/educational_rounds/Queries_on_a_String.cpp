#include <iostream>
using namespace std;
#include <string>

int n;
long long l, r, k, substr_length;
string untouched_half1 = "", untouched_half2 = "", our_string = "";
string shifted_string = "";

string rotator(long long shift, string our_string){
  //std::cout << "shift amount: " << shift << '\n';
  int critical_index = our_string.length() - shift;
  //std::cout << "critical_index: " << critical_index << '\n';
  string second_half = our_string.substr(critical_index);
  //std::cout << "second_half: " << second_half << '\n';
  string first_half = our_string.substr(0,critical_index);
  //std::cout << "first_half: " << first_half << '\n';
  return second_half + first_half;
}

int main(){

  std::cin >> our_string;
  std::cin >> n;

  for (int i = 0; i < n; i++) {
    std::cin >> l;
    std::cin >> r;
    std::cin >> k;
    substr_length = r - l + 1;
    k = k % substr_length;
    if (k == 0) continue;
    l -= 1;
    r -= 1;

    //shifted_string = our_string.substr(l, substr_length);
    //std::cout << "shifted initial: " << shifted_string << '\n';
    //if(our_string.find(l) != 0) untouched_half1 = our_string.substr(0, l);
    //if(our_string.find(r) != our_string.length() - 1) untouched_half2 = our_string.substr(r+1);
    //std::cout << "untouched_half1: " << untouched_half1 << "  untouched_half2: " << untouched_half2 << '\n';
    //shifted_string = rotator(k, our_string.substr(l, substr_length));
    //std::cout << "shifted after: " << shifted_string << '\n';
    our_string = our_string.substr(0, l) + rotator(k, our_string.substr(l, substr_length)) + our_string.substr(r+1);
    //std::cout << "new our_string: " << our_string << '\n';
  }

  std::cout << our_string << '\n';

  return 0;
}
