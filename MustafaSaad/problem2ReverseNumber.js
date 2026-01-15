const prompt = require("prompt-sync")();

let N = prompt("Enter N: ");
let digitCount = N.toString().length;
let zeros = 10 ** digitCount;
let result = 0;

// First Solution
// while (N > 0) {
//   result += (N % 10) * (zeros / 10);
//   zeros /= 10;
//   N = Math.floor(N / 10);
// }

// Better one
while (N > 0) {
  lastDigit = N % 10;
  N = Math.floor(N / 10);
  result = result * 10 + lastDigit;
}

console.log(result, result * 3);
