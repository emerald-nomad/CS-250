#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  map<string,string> colors;

  colors["red"] = "FFOOOO";
  colors["green"] = "OOFFOO";
  colors["blue"] = "OOOOFF";
  colors["magenta"] = "FFOOFF";
  colors["yellow"] = "FFFFOO";
  colors["cyan"] = "OOFFFF";

  while (true) {
    string color;

    cout << "\nEnter a color, or QUIT to stop: ";
    cin >> color;

    if (color == "QUIT") {
      break;
    }

    cout << "Hex: " << colors[color] << endl;
  }

  return 0;
}
