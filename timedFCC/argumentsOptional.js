function addTogether() {
    var args = Array.from(arguments);

    if(args.length > 1 && Number.isInteger(args[0]) && Number.isInteger(args[1])){
        return(args[0] + args[1])
    }
    else if(args.length === 1  && Number.isInteger(args[0])){
        return function(arg2){
            if(Number.isInteger(arg2)){
                return(args[0] + arg2);
            }
        }
    }
    else {
        return undefined;
    }
  }
  
//   addTogether(2, 3);
//   addTogether(2)([3])
//   addTogether(2, "3", 2);
addTogether(2)(3);


// function addTogether() {

//     var args = Array.from(arguments);
//     return args.forEach(arg => {
//         // console.log(arg);
//       if(Number.isInteger(arg) === false){
//         //   console.log("undef")
//           return undefined;
//       } else if(args.length > 1){
//         return(arg + args[1]);
//       } else {
//           return function(arg2){
//             if(Number.isInteger(arguments[0])){
//                 return(arg + arguments[0]);
//             }
//           }
//       }
//     });
// }