// Given a positive integer num, return the sum of all odd Fibonacci numbers that are less than or equal to num.

// The first two numbers in the Fibonacci sequence are 1 and 1. Every additional number in the sequence is the sum of the two previous numbers. The first six numbers of the Fibonacci sequence are 1, 1, 2, 3, 5 and 8.

// For example, sumFibs(10) should return 10 because all odd Fibonacci numbers less than or equal to 10 are 1, 1, 3, and 5.

function sumFibs(num) {
  var oddfibonacciNumber = [1, 1];
  var fibonacciNumber1 = 1;
  var fibonacciNumber2 = 1;
  var fibSum = 0;

  for (var i = 0; fibSum <= num; i++) {
    if (fibSum % 2 !== 0) {
      oddfibonacciNumber.push(fibSum);
    }
    fibSum = fibonacciNumber1 + fibonacciNumber2;
    fibonacciNumber1 = fibonacciNumber2;
    fibonacciNumber2 = fibSum;
  }

  return oddfibonacciNumber.reduce(
    (accumulator, currentValue) => accumulator + currentValue
  );
}

sumFibs(4);
