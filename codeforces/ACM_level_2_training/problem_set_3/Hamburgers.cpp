#include <iostream>
using namespace std;
#include <string>

string recipe;
int recipe_buns = 0, recipe_cheese = 0, recipe_sausage = 0;
int buns_to_buy = 0, cheese_to_buy = 0, sausage_to_buy = 0;
int inv_buns, inv_cheese, inv_sausage;
int buns_price, sausage_price, cheese_price;
int max_burgers, purchase;
long long money, recipe_price;

void buy_purchase(){
  if (money >= purchase) {
    money -= purchase;
    inv_cheese += cheese_to_buy;
    inv_sausage += sausage_to_buy;
    inv_buns += buns_to_buy;
  }
}

int main() {
  cin >> recipe;
  std::cin >> inv_buns >> inv_sausage >> inv_cheese;
  std::cin >> buns_price >> sausage_price >> cheese_price;
  std::cin >> money;

  for (int i = 0; i < recipe.length(); i++) {
    if (recipe[i] == 'B') recipe_buns++;
    else if (recipe[i] == 'S') recipe_sausage++;
    else if (recipe[i] == 'C') recipe_cheese++;
  }

  if (recipe_buns != 0 && recipe_buns != inv_buns) {
    buns_to_buy = recipe_buns - (inv_buns % recipe_buns);
  }
  if (recipe_sausage != 0 && recipe_sausage != inv_sausage) {
    sausage_to_buy = recipe_sausage - (inv_sausage % recipe_sausage);
  }
  if (recipe_cheese != 0 && recipe_cheese != inv_cheese) {
    cheese_to_buy = recipe_cheese - (inv_cheese % recipe_cheese);
  }

  purchase = cheese_price * cheese_to_buy + sausage_price * sausage_to_buy + buns_price * buns_to_buy;
  std::cout << "purchase 1: " << purchase << '\n';
  buy_purchase();

  recipe_price = cheese_price * recipe_cheese + sausage_price * recipe_sausage + buns_price * recipe_buns;
  cheese_to_buy = sausage_to_buy = buns_to_buy = money % recipe_price;
  purchase = recipe_price * (money % recipe_price);
  std::cout << "purchase 2: " << purchase << '\n';
  buy_purchase();

  max_burgers = min(inv_buns % recipe_buns, inv_cheese % recipe_cheese);
  max_burgers = min(max_burgers, inv_sausage % recipe_sausage);

  std::cout << max_burgers << '\n';

  return 0;
}
