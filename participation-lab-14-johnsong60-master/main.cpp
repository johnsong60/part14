// TODO: Add header information
#include <iostream>

int main() {



  int get_reverse(const queue<int> &values) {
    int reverse {};

    for (auto digits = values; !digits.empty();digits.pop()){
      reverse *=10;
      reverse += digits.front();
    }
  }
    return reverse;
}
