// Given a positive integer num, return the sum of all odd Fibonacci numbers that are less than or equal to num.

// The first two numbers in the Fibonacci sequence are 1 and 1. Every additional number in the sequence is the sum of the two previous numbers. The first six numbers of the Fibonacci sequence are 1, 1, 2, 3, 5 and 8.

// For example, sumFibs(10) should return 10 because all odd Fibonacci numbers less than or equal to 10 are 1, 1, 3, and 5.

function sumFibs(num) {
  if (num < 0) return -1;
  if (num === 0 || num === 1) return 1;

  var fib1 = 0;
  var fib2 = 1;
  var fibSum = 1;

  var total = 0;

  for (var i = 1; fibSum <= num; i++) {
    if (fibSum % 2 !== 0) {
      total += fibSum;
    }

    fibSum = fib1 + fib2;
    fib1 = fib2;
    fib2 = fibSum;
  }

  console.log(total);
}

sumFibs(1000);

//   14m22s24