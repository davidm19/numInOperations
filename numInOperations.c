#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int power(int base, int expo);
void tisTrue(void);
void tisFalse(void);

int main() {

  int a;
  int b;

  int i;
  
  bool isInRange = false;
  
  char string[] = "";

  printf("Enter a number: ");
  scanf("%d", &a);

  printf("Enter another number: ");
  scanf("%d", &b);

  for(i = 0; i <= 10; ++i) {

    switch(i) {

      case 1:
	printf("Sum of %d and %d: %d \n",a,b,a+b);
	if(a == a + b || b == a + b) {
	  isInRange = true;
	}
	break;
      case 2:
	printf("Differences between %d and %d: %d \n",a,b,a-b);
	if(a == a - b || b == a - b) {
	  isInRange = true;
	}
	break;
      case 3:
	printf("Differences between %d and %d: %d \n",b,a,b-a);
	if(a == b - a || b == b - a) {
	  isInRange = true;
	}
	break;
      case 4:
	printf("Product of %d and %d: %d \n",a,b,a*b);
	if(a == a * b || b == a * b) {
	  isInRange = true;
	}
	break;
      case 5:
	printf("Quotient of %f and %f: %f \n",(float) a,(float) b,(float) a/b);
	if(a == a / b || b == a / b) {
	  isInRange = true;
	}
	break;
      case 6:
	printf("Quotient of %f and %f: %f \n",(float) b,(float) b,(float) b/a);
	if(a == b / a || b == b / a) {
	  isInRange = true;
	}
	break;
      case 7:
	printf("Modulo of %d and %d: %d \n",a,b,a%b);
	if(a == a % b || b == a % b) {
	  isInRange = true;
	}
	break;
      case 8:
	printf("Modulo of %d and %d: %d \n",b,a,b%a);
	if(a == b % a || b == b % a) {
	  isInRange = true;
	}
	break;
      case 9:
	printf("%d raised to the %d power: %d \n",a,b,power(a,b));
	if(a == power(a,b) || b == power(a,b)) {
	  isInRange = true;
	}
	break;
      case 10:
	printf("%d raised to the %d power: %d \n",b,a,power(b,a));
	if(a == power(b,a) || b == power(b,a)) {
	  isInRange = true;
	}
	break;
      default:
	printf("\n");
      
    }


    
  }

  if(isInRange) {
    printf("In range! \n");
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

void tisTrue(void) {

  printf("True \n");
  
}

void tisFalse(void) {

  printf("False \n");

}
