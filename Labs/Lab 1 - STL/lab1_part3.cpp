#include <iostream>
#include <string>
#include <queue>

using namespace std;



int main() {
  float balance = 0.0;

  queue<float> transactions;

  transactions.push(25);
  transactions.push(-75.87);
  transactions.push(44.31);
  transactions.push(-.75);

  while (!transactions.empty()) {
    cout << transactions.front() << " pushed to account." << endl;
    balance += transactions.front();
    transactions.pop();
  }

  cout << "\nFinal balance: $" << balance << endl;

  return 0;
}
