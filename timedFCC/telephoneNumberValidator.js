function telephoneCheck(str) {
  // Good luck!
  var whiteSpace = /\s+|-+/g;
  var alphaChars = /[a-zA-Z]+/g;
  str = str.replace(whiteSpace, "");
  str = str.replace(alphaChars, "");


  if (str.length === 11 || str.length === 13)
  {
    if(str[0] !== 1) return false;

    var parenthesis = 0;
    
    for(var i = 0; i < str.length; i++)
    {
      if(str[i] == "(" || str[i] == ")"){
        parenthesis ++;
      }
    }
    if(parenthesis !== 2 || parenthesis !== 0){
      return false;
    }
  }

  return true;
}

telephoneCheck("1 (555)-555-5555");