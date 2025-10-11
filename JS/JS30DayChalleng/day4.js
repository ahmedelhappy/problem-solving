//https://leetcode.com/problems/apply-transform-over-each-element-in-array/submissions/1797944456/


let arr = [1, 2, 3];

function fn(arr, f) {
  let returnedArray = []; 

  for(let i = 0; i < arr.length; i++) {
    returnedArray.push(f(arr[i], i));
  }

  return returnedArray;
}


function plusOne (n, i) {
  return n + 1;
}


let newArray = fn (arr, plusOne);

console.log(newArray)

