// Convert the characters &, <, >, " (double quote), and ' (apostrophe), in a string to their corresponding HTML entities.

function convertHTML(str) {
    // &colon;&rpar;
  
    var arr = str.split("");
  
    for(var i = 0; i < arr.length; i++){
      switch (arr[i]) {
        case "&":
          arr[i] = "&amp;";
          break;
        case "<":
          arr[i] = "&lt;";
          break;
        case ">":
          arr[i] = "&gt;";
          break;
        case '"':
          arr[i] = "&quot;";
          break;
        case "'":
          arr[i] = "&apos;";
          break;
      }
    };
  
    str = arr.join("");
  
    return str;
  }
  
  convertHTML("Dolce & Gabbana");

//   4m12s46