#include <iostream>
using namespace std;

int count, beef_num, chicken_num, buns_num, bun_pairs;
int& max_type[2], min_type[2];

int main(){

cin >> count;

for (int i = 0; i < count; i++) {
  std::cin >> buns_num;
  std::cin >> beef[0];
  std::cin >> chicken[0];
  std::cin >> beef[1];
  std::cin >> chicken[1];

  bun_pairs = buns_num % 2;


  if (possible_sandwiches >= beef_num + buns_num){
    std::cout << possible_sandwiches<< '\n';
  }
  }
}


  return 0;
}
