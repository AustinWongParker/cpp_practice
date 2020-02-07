// awp version

#include <cmath>
#include <iostream>
#include <iomanip> //sets decimal precison to 2
using namespace std;

int main() {
  char user_input;
  double r, g, b; //three input values from user

  cout << "Are input components int or float (i / f)?\n";
  cin >> user_input;

  if(user_input == 'i'){
    cout << "Input r, g, b: ";
    cin >> r >> g >> b; //operator chaining. takes in multiple inputs on one line
    r = r / 255.0;
    g = g / 255.0;
    b = b / 255.0;
    cout << setprecision(2) << fixed; // fixed will place a fixed number of decimal digits after the decimal point.
    cout << "Float representation: " << r << ", " << g << ", " << b << endl; // endl is endline. It is a function that outputs a newline character (‘\n’)
                                                                             // and then calls std::ostream::flush() on the output stream it is being added to.
  }
  else if(user_input == 'f'){
    cout << "Input r, g, b: ";
    cin >> r >> g >> b; //operator chaining. takes in multiple inputs on one line
    r = round((r * 255));
    g = round((g * 255));
    b = round((b * 255));
    cout << "Integer representation: " << r << ", " << g << ", " << b << endl; // endl is endline. It is a function that outputs a newline character (‘\n’)
                                                                               // and then calls std::ostream::flush() on the output stream it is being added to.
  }
  else {
    cout << "Invalid option.";
  }
  return 0; //return value; exit code of your program. 0 means 'OK program has executed successfully'
}
