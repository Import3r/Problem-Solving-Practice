#include <bits/stdc++.h>
using namespace std;

//still wrong code

int n, number;
std::vector<int> v;

int main(){
  //freopen("rock.in" , "r" , stdin);
  long long t;
  long long n;
  long long x = 0;
  int l, r;
  vector<long long> v;
  bool cont;
  cin >> t;
  while(t--){
      v.clear();
      x = 0;
      cont = false;
      cin>>n;

      int i = 2;
      x = (i)*(i+1)/2;
      while (x <= n){
        if (x == n) {
          std::cout << "YES" << '\n';
          cont = true;
          break;
        }
        v.push_back(x);
        i++;
        x = (i)*(i+1)/2;
      }

      if (cont) continue;

      if (v.size() == 0) {
        std::cout << "NO" << '\n';
        continue;
      }

      l = 0;
      r = v.size() - 1;
      while (l <= r) {
        //std::cout << "test: " << v[l] + v[r] << '\n';
        while (r >= l && v[l] + v[r] > n){
          r--;
        }
        if (v[l] + v[r] == n){
          std::cout << "YES" << '\n';
          cont = true;
          break;
        }
        l++;
      }

      if (cont) continue;
      if (v[l] + v[r] == n){
        std::cout << "YES" << '\n';
        continue;
      }
      else{
        std::cout << "NO" << '\n';
        continue;
      }

  }

  return 0;
}
