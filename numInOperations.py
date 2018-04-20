def numInOperations(a, b):

    operations = "a"

    for i in operations:
        options = {
            1 : print("Sum of " + str(a) + " and " + str(b) + ": " + str(a + b)),
            2 : print("Difference of " + str(a) + " and " + str(b) + ": " + str(a - b)),
            3 : print("Difference of " + str(b) + " and " + str(a) + ": " + str(b - a)),
            4 : print("Product of " + str(a) + " and " + str(b) + ": " + str(a * b)),
            5 : print("Quotient of " + str(a) + " and " + str(b) + ": " + str(a / b)),
            6 : print("Quotient of " + str(b) + " and " + str(a) + ": " + str(b / a)),
            7 : print("Modulo of " + str(a) + " and " + str(b) + ": " + str(a % b)),
            8 : print("Modulo of " + str(b) + " and " + str(a) + ": " + str(b % a)),
            9 : print(str(a) + " raised to the " + str(b) + " power: " + str(pow(a,b))),
            10: print(str(b) + " raised to the " + str(a) + " power: " + str(pow(b,a)) + "\n")
        }

    if a in [a+b, a-b, b-a, a*b, a/b, b/a, a%b, b%a, pow(a,b), pow(b,a)] or b in [a+b, a-b, b-a, a*b, a/b, b/a, a%b, b%a, pow(a,b), pow(b,a)]:
        print("In range!")
