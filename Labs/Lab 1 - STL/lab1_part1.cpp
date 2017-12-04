#include <iostream>
#include <string>
#include <vector>

using namespace std;

void addIngredients(vector<string>& ingredients) {
  ingredients.push_back("lettuce");
  ingredients.push_back("tomato");
  ingredients.push_back("mayo");
  ingredients.push_back("bread");
}

void displayIngredients(const std::vector<string>& ingredients) {
  cout << "Here's all the ingredients: " << endl;

  for (unsigned int i = 0; i < ingredients.size(); i++) {
    cout << "\t" << i + 1 << ": " << ingredients[i] << endl;
  }
}

int main () {
  vector<string> ingredients;

  addIngredients(ingredients);

  displayIngredients(ingredients);

  return 0;
}
