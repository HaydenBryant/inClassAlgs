function palindrome(str) {
    var alph = "abcdefghijklmnopqrstuvwxyz1234567890";
    // Good luck!

    newStr = "";

    for(var i = 0; i < str.length; i++){
        if(alph.includes(str[i].toLowerCase())){
            newStr += str[i].toLowerCase();
        }
    }

    console.log(newStr);

    return true;
  }
  
  
  
  palindrome("eyeEFV457 /.{}");
  