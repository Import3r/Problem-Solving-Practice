using namespace std;
#include <string>
#include "iostream"
#include <bits/stdc++.h>

string input_string, substring = "", string_a = "", string_b = "";

void identify(string substring){
  std::cout << substring << '\n';
  if (substring == "") {
    string_b.append(substring + ",");
    return;
  }
  bool is_integer = true;
  string temp_string = "";

  for (int index = 0; index < substring.length(); index++) {
      if (isalpha(substring[index]) || substring.find(".") != std::string::npos) is_integer = false;
    }

  if (is_integer) {
    string_a.append(substring + ",");
    return;
  }
  else {
    string_b.append(substring + ",");
    return;
  }
}


int main(){
  std::cin >> input_string;
  for (int index = 0; index < input_string.length(); index++) {
    if (isalnum(input_string[index])) substring.push_back(input_string[index]);
    else {std::cout << substring << '\n'; identify(substring); substring = "";}
  }

  std::cout << '"' + string_a + '"' << '\n' << '"' + string_b + '"' << '\n';
  return 0;
}
