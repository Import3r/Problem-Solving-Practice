#include <iostream>
using namespace std;

int number = 1;
int place = 0;
int k;

bool is_perfect(int num){
    int sum_of_digits = 0;
    while(num != 0){
      sum_of_digits += num % 10;
      num /= 10;
    }
    return sum_of_digits == 10;
}

int main(){
std::cin >> k;
while(true) {
  if(is_perfect(number)) place++;
  if (place == k) break;
  number += 9;
}
std::cout << number << '\n';
}
