function palindrome(str) {
    // Good luck!
    // var junk = /\s+|_|-|:+/g;

    // str = str.toLowerCase().replace(junk, "")

        newStr = ""
    
        for(var i = 0; i < str.length; i++){
            if(str[i].match(/^[0-9a-zA-Z]+$/)){
                newStr += str[i].toLowerCase();
            }
        }
    
        if(newStr === newStr.split("").reverse().join("")){
            console.log(true);
            return true;
        } else {
            console.log(false);
            return false;
        }
      }
      
      palindrome("eye")
      palindrome("0_0 (: /-\ :) 0-0");
      palindrome("A man, a plan, a canal. Panama")
      palindrome("_eye")
      palindrome("not a palindrome")
      palindrome("never odd or even")
      palindrome("nope")
  