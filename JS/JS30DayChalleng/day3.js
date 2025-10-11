
// JAVASCRIPT PROBLEM SOLVING DAY 3

// will solve it using factory function..

function createCounter(init) {
  let currentValue = init;
  return {
    value: currentValue,
    increment: _ => ++currentValue,
    decrement: _ => --currentValue,
    reset: _ => {
      currentValue = init;
      return currentValue;
    },
  }
}

let counter1 = createCounter(10);
let counter2 = createCounter(5);
let counter3 = createCounter(1);

