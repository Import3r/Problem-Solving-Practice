#include <bits/stdc++.h>
using namespace std;

//still wrong code

long long n, number, temp, first, second, differences = 0;

std::vector<long long> v;
std::vector<long long> v_sorted;

int main(){
  //freopen("mult.in" , "r" , stdin);

  std::cin >> n;

  while (n--) {
    std::cin >> number;
    v.push_back(number);
    v_sorted.push_back(number);
  }

  sort(v_sorted.begin(), v_sorted.end());

    for (int i = 0; i < v.size(); i++) {
      if (v[i] != v_sorted[i]){
          first = v[i];
          second = v_sorted[i];
          int j = i + 1;
          while (j < v.size()) {
            if (v[j] == second){
              temp = v[j];
              v[j] = v[i];
              v[i] = temp;

              //check if sorted
              for (int  i = 0; i < v.size(); i++) {
                if (v[i] != v_sorted[i]){
                    std::cout << "NO" << '\n';
                    return 0;
                  }
              }
              std::cout << "YES" << '\n';
              return 0;
            }
            j++;
          }

      }
    }
    std::cout << "YES" << '\n';
    return 0;
}
