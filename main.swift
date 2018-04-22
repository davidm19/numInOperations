func numInOperations() {

  print("Enter a number: ")
  let a = Int(readLine(strippingNewline: true)!)!
  
  print("Enter another: ")
  let b = Int(readLine(strippingNewline: true)!)!
  
  var isInRange: Bool = false
  
  for i in 1...10 {
    switch i {
      case 1:
        print("Sum of \(a) and \(b): \(a+b)")
        if a == a + b || b == a + b {
          isInRange = true
        }
      case 2:
        print("Difference of \(a) and \(b): \(a-b)")
        if a == a - b || b == a - b {
          isInRange = true
        }
      case 3:
        print("Difference of \(b) and \(a): \(b-a)")
        if a == b - a || b == b - a {
          isInRange = true
        }
      case 4:
        print("Product of \(a) and \(b): \(a*b)")
        if a == a * b || b == a * b {
          isInRange = true
        }
      case 5:
        print("Quotient of \(a) and \(b): \(a/b)")
        if a == a / b || b == a / b {
          isInRange = true
        }
      case 6:
        print("Quotient of \(b) and \(a): \(b/a)")
        if a == b / a || b == b / a {
          isInRange = true
        }
      case 7:
        print("Modulo of \(a) and \(b): \(a%b)")
        if a == a % b || b == a % b {
          isInRange = true
        }
      case 8:
        print("Modulo of \(b) and \(a): \(b%a)")
        if a == b % a || b == b % a {
          isInRange = true
        }
      case 9:
        print("\(a) to the \(b) power: \(raiseTo(base: a,expo: b))")
        if a == raiseTo(base: a,expo: b) || b == raiseTo(base: a,expo: b) {
          isInRange = true
        }
      case 10:
        print("\(b) to the \(a) power: \(raiseTo(base: b,expo: a))")
        if a == raiseTo(base: b,expo: a) || b == raiseTo(base: b,expo: a) {
          isInRange = true
        }
      default:
        print("\n")
    }
    
  }
  
  if isInRange {
    print("In range!")
  }
  
}

func raiseTo(base: Int, expo: Int) -> Int {

  var result: Int = 1
  
  for _ in 1...expo {
    result *= base
  }
  
  return result
  
}

numInOperations()