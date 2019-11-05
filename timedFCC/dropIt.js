function dropElements(arr, func) {
  var newArr = [];

  for (var i = 0; i < arr.length; i++) {
    if (func(arr[i])) {
      newArr = arr.slice(i, arr.length);
      break;
    }
  }

  return newArr;
}

dropElements([1, 2, 3], function(n) {
  return n < 3;
});
