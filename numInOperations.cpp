#include <iostream>
#include <cmath>

using namespace std;

int power(int base, int expo);

int main()
{
  //TODO: IMPLEMENT
  int a;
  int b;

  int i;

  bool isInRange;

  cout << "Enter a number: ";
  cin >> a;

  cout << "Enter another number: ";
  cin >> b;

  cout << "\nThank you " << endl;
  cout << "First number: " << a << ", Second Number: " << b << endl;

  //CHECK SYNTAX OF FOR LOOPS
  for(i = 0; i <= 10; ++i) {
    switch (i)
    {
      case 1:
        cout << "Sum of " << a << " and " << b << ": " << a + b << endl;
        break;
      
      case 2:
        cout << "Difference of " << a << " and " << b << ": " << a - b << endl;
        break;

      case 3:
        cout << "Difference of " << b << " and " << a << ": " << b - a << endl;
        break;
    
      case 4:
        cout << "Product of " << a << " and " << b << ": " << a * b << endl;
        break;

      case 5:
        cout << "Quotient of " << a << " and " << b << ": " << a / b << endl;
        break;

      case 6:
        cout << "Quotient of " << b << " and " << a << ": " << b / a << endl;
        break;

      case 7:
        /* code */
        break;

      case 8:
        /* code */
        break;

      case 9:
        /* code */
        break;

      case 10:
        /* code */
        break;

      default:
        cout << "\n";
        break;
    }

    if(isInRange) {
      cout << "In range! \n";
    }
  }
  return 0;
}

int power(int base, int expo) {
  int i;
  int p = 1;

  for(i = 1; i <= expo; ++i) {
    p = p * base;
  }

  return p;
}