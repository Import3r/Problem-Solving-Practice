#include <iostream>
using namespace std;
#include <math.h>

long long sum_until(long long num){
  if (num % 2 == 0) return num * (num+1)/2;  // This was the shittiest part that destroyed me, I was perfoming power operations on an int variable
                                            // in-place, and there were overflows I didn't know about. passed the parameter as long long instead and it
                                            // worked like a charm. Note-to-self: FUCK YOU. Lol JK I mean pay attention to the type and SIZE of the variables
                                            // you are operating on. Please. Like, Please.
  else return num + sum_until(num-1);
}

int main(){

long long lines, num, power, total;
cin >> lines;

for (int i=0; i <lines; i++){
  cin >> num;
  total = sum_until(num);
for (int i=0; true; i++){
   power = pow(2,i);
   if (power <= num) total -= 2*power;
   else break;
}
std::cout << total << '\n';
}

  return 0;
}
