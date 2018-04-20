def numInOperations()
  print "Enter a number: "
  a = gets.chomp

  print "Enter another: "
  b = gets.chomp

  i = 0
  
  loop do
    i += 1
    case i
     when 1
      print "Sum of " + a + " and " + b + ": " a + b
      end
     when 2
      print "Difference of " + a + " and " + b + ": " + a - b
      end
     when 3
      print "Difference of " + b + " and " + a + ": " + b - a
      end
     when 4
      print "Product of " + a + " and " + b + ": " + a * b
      end
     when 5
      print "Quotient of " + a + " and " + b + ": " + a / b
      end
     when 6
      print "Quotient of " + b + " and " + a + ": " + b / a
      end
     when 7
      print "Modulo of " + a + " and " + b + ": " + a % b
      end
     when 8
      print "Modulo of " + b + " and " + a + ": " + b % a
      end
     when 9
      print a + " to the " + b + "power: " + a ** b
      end
     when 10
      print b + " to the " + a + "power: " + b ** a
      end
  end while i < 11
  
end
