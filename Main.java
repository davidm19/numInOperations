import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Main m1 = new Main();

        m1.numInOperations();

    }

    public void numInOperations() {
        int a, b;

        int i;

        boolean isInRange = false;

        System.out.print("Enter a number: ");

        Scanner scan1 = new Scanner(System.in);
        a = scan1.nextInt();

        System.out.print("Enter another: ");

        Scanner scan2 = new Scanner(System.in);
        b = scan2.nextInt();

        int sum = a + b;

        for(i = 0; i <= 10; i++) {
            switch(i) {
                case 1:
                    System.out.println("Sum of " + a + " and " + b + ": " + Integer.toString(a + b));
                    if((a == a + b) || (b == a + b)) {
                        isInRange = true;
                    }
                    break;
                case 2:
                    System.out.println("Difference of " + a + " and " + b + ": " + Integer.toString(a - b));
                    if((a == a - b) || (b == a - b)) {
                        isInRange = true;
                    }
                    break;
                case 3:
                    System.out.println("Difference of " + b + " and " + a + ": " + Integer.toString(b - a));
                    if((a == b - a) || (b == b - a)) {
                        isInRange = true;
                    }
                    break;
                case 4:
                    System.out.println("Product of " + a + " and " + b + ": " + Integer.toString(a * b));
                    if((a == a * b) || (b == a * b)) {
                        isInRange = true;
                    }
                    break;
                case 5:
                    System.out.println("Quotient of " + a + " and " + b + ": " + Integer.toString(a / b));
                    if((a == a + b) || (b == a + b)) {
                        isInRange = true;
                    }
                    break;
                case 6:
                    System.out.println("Quotient of " + b + " and " + a + ": " + Integer.toString(b / a));
                    if((a == b / a) || (b == b / a)) {
                        isInRange = true;
                    }
                    break;
                case 7:
                    System.out.println("Modulo of " + a + " and " + b + ": " + Integer.toString(a % b));
                    if((a == a % b) || (b == a % b)) {
                        isInRange = true;
                    }
                    break;
                case 8:
                    System.out.println("Modulo of " + b + " and " + a + ": " + Integer.toString(b % a));
                    if((a == b % a) || (b == b % a)) {
                        isInRange = true;
                    }
                    break;
                case 9:
                    System.out.println("Power of " + a + " and " + b + ": " + Integer.toString(power(a,b)));
                    if((a == power(a,b)) || (b == power(a,b))) {
                        isInRange = true;
                    }
                    break;
                case 10:
                    System.out.println("Power of " + b + " and " + a + ": " + Integer.toString(power(b,a)));
                    if((a == power(b,a)) || (b == power(b,a))) {
                        isInRange = true;
                    }
                    break;
            }
        }

        if(isInRange) {
            System.out.println("In range!");
        }

    }

    public int power(int base, int expo) {
        int p, i;

        p = 1;

        for(i = 0; i <= expo; i++) {
            p = p * base;
        }

        return p;
    }

}
