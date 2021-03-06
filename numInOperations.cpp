#include <iostream>
#include <cmath>

using namespace std;

int power(int base, int expo);

int main()
{
  int a;
  int b;

  int i;

  bool isInRange;

  cout << "Enter a number: ";
  cin >> a;

  cout << "Enter another number: ";
  cin >> b;

  for(i = 0; i <= 10; ++i) {
    switch (i)
    {
      case 1:
        cout << "Sum of " << a << " and " << b << ": " << a + b << "\n";
        break;
      
      case 2:
        cout << "Difference of " << a << " and " << b << ": " << a - b << "\n";
        break;

      case 3:
        cout << "Difference of " << b << " and " << a << ": " << b - a << "\n";
        break;
    
      case 4:
        cout << "Product of " << a << " and " << b << ": " << a * b << "\n";
        break;

      case 5:
        cout << "Quotient of " << a << " and " << b << ": " << a / b << "\n";
        break;

      case 6:
        cout << "Quotient of " << b << " and " << a << ": " << b / a << "\n";
        break;

      case 7:
        cout << "Modulo of " << a << " and " << b << ": " << a % b << "\n";
        break;

      case 8:
        cout << "Modulo of " << b << " and " << a << ": " << b % a << "\n";
        break;

      case 9:
        cout << a << " raised to the power of " << b << ": " << power(a,b) << "\n";
        break;

      case 10:
        cout << b << " raised to the power of " << a << ": " << power(b,a) << "\n";
        break;

      default:
        cout << "\n";
        break;
    }
  }

  cout << endl;

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
