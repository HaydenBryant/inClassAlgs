function palindrome(str) {
    // Good luck!
    // var junk = /\s+|_|-|:+/g;

    // str = str.toLowerCase().replace(junk, "")

        newStr = ""
    
        for(var i = 0; i < str.length; i++){
            if(str[i].match(/^[0-9a-z]+$/)){
                newStr += str[i];
            }
        }
    
        if(newStr === newStr.split("").reverse().join("")){
            return true;
        } else {
            return false;
        }
      }
      
      palindrome("0_0 (: /-\ :) 0-0");
  