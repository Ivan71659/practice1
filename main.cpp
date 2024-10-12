#include <iostream>

using namespace std;

class number {
  private:
    int value;
  public:
    number (int value){
      this->value = value;
    }
    int get_value () {
      return value;
    }

    // exercise: try coding multiplication so that the two numbers are multiplied together and then subtract 5.
    number operator * (number other_num){
      int calc = (other_num.value * value) - 5;
      return number (calc);
    }

    // exercise: try coding divison so that the two numbers are divided together and then add 7.
    number operator / (number other_num){
      int calc = (value / other_num.value) + 7;
      return number (calc);
    }
};

int main () { 
  number class1 = number (8);
  number class2 = number (4);
  
  number answer1 = class1 * class2;
  number answer2 = class1 / class2;

  cout << answer1.get_value() << "\n";
  cout << answer2.get_value() << "\n";
}
