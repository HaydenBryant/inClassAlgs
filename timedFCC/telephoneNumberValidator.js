function telephoneCheck(str) {
    // Good luck!
    var whiteSpace = /\s+|_+/g;
    str = str.replace(whiteSpace, "");
    return true;
  }
  
  telephoneCheck("555-555-5555");
  