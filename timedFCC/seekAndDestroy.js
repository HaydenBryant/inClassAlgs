// You will be provided with an initial array (the first argument in the destroyer function), followed by one or more arguments. Remove all elements from the initial array that are of the same value as these arguments.

function destroyer(arr, ...args) {
    // Remove all the values
    return arr.filter(element => !args.includes(element));
  }
  
  destroyer([1, 2, 3, 1, 2, 3], 2, 3);

//   11m49s28

// forgot about using spread operator on args