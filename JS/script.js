/*
// positiveSum

const myArr = [10, 20, 20, -10, -20];

// function positiveSum(arr) {
//   let result = 0;
//   arr.forEach((element) => {
//     if (element > 0) {
//       result += element;
//     }
//   });
//   return result;
// }

function positiveSum(arr) {
  return arr.filter((num) => num >= 0).reduce((acc, current) => acc + current, 0);
}

console.log(positiveSum(myArr));
*/
//=====================================================
/*
//Sum without highest and lowest number

function sumArray(array) {
  if (!array || array.length <= 2) return 0;
  let highest = Number.MIN_VALUE;
  let lowest = Number.MAX_VALUE;
  let sum = 0;
  array.forEach((num) => {
    if (num > highest) highest = num;
    if (num < lowest) lowest = num;
    sum += num;
  });
  return sum - (highest + lowest);
}

console.log(sumArray(0));
*/
//=====================================================
/*
// String repeat

// function repeatStr (n, s) {
//   while (n--) {
//     let result = "";
//     result += s;
//   }
// }
function repeatStr (n, s) {
  return s.repeat(n);
}
*/

