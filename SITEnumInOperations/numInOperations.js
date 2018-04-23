function numInOperations() {
    var a = document.getElementById("num1");
    var b = document.getElementById("num2");

    var i;

    var isInRange = false;

    var text = "";

    for(i = 0; i <= 10; i++) {
        switch(i) {
            case 1:
                text = "ll"; 
                break;
            case 2:
                text = "ll"; 
                break;
            case 3:
                text = "ll";
                break;
            case 4:
                text = "ll";
                break;
            case 5:
                text = "ll";
                break;
            case 6:
                text = "ll";
                break;
            case 7:
                text = "ll";
                break;
            case 8:
                text = "ll";
                break;
            case 9:
                text = "ll";
                break;
            case 10:
                text = "ll";
                break;
            default:
                text = "ll";
        }
    }

    document.getElementById("demo").innerHTML = text;

}