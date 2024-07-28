var createCounter = function(init) {
    a = init;
    return {
        increment : function() {
            a++ ;
            return a ;
        },
        decrement : function() {
            a--;
            return a
        },
        reset : function() {
            a = init;
            return init
        }
    };
};


const counter1 = createCounter(5);
console.log(counter1.increment()); // 6
console.log(counter1.reset()); // 5
console.log(counter1.decrement()); // 4
console.log("\n"); // 4
const counter2 = createCounter(0);
console.log(counter2.increment()); // 1
console.log(counter2.increment()); // 2
console.log(counter2.decrement()); // 1
console.log(counter2.decrement()); // 0
console.log(counter2.reset()); // 0
console.log(counter2.reset()); // 0
console.log(counter1.increment()); // 6
console.log(counter1.increment()); // 6
