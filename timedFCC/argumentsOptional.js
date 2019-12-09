function addTogether() {
    // if(arguments.length === 1 && Number.isInteger(arguments[0])){

    // }
    var args = Array.from(arguments);
    args.forEach(arg => {
      if(Number.isInteger(arg) === false){
          return undefined;
      }
    })
    if(args.length > 1){
        return(args[0] + args[1])
    } else {
        return undefined;
    }
  }
  
  addTogether(2, 3);
  